#include "FuncCalculator.h"
#include <string>
#include <iostream>

FuncCalculator::FuncCalculator()
{
	m_functions.push_back(make_shared<ID>());
	m_functions.push_back(make_shared<SwapCase>());
	m_functions.push_back(make_shared<Reverse>());
}


void FuncCalculator::run()
{
	std::string usrInput;

	while (1)
	{
		printFuncMenu();
		std::cin >> usrInput;
		std::cout << std::endl;

		if (usrInput == "eval")
			calc();

		else if (usrInput == "help")
			helpScreen();

		else if (usrInput == "exit")
		{
			std::cout << "Goodbye" << std::endl;
			exit(EXIT_SUCCESS);
		}

		else if (usrInput == "del")
			deleteFunc();

		else if (usrInput == "substr" || usrInput == "mul" ||
			usrInput == "add" || usrInput == "comp")
			addFunc(usrInput);
		
		else std::cout << "Bad input\n";
	}
}

void FuncCalculator::printFuncMenu()
{
	std::cout << "List of available string operations:\n";

	for (int i = 0; i < m_functions.size(); i++)
		std::cout << i << ".   " << m_functions[i]->print() << std::endl;

	std::cout << "Enter command ('help' for the list of available commands): ";
}


void FuncCalculator::calc()
{
	int numFunc;
	std::string str;
	std::cin >> numFunc;
	std::cin >> str;

	if(numFunc >= 0 && numFunc < m_functions.size())
		std::cout << m_functions[numFunc]->print() <<
		"(" << str << ") = " << m_functions[numFunc]->action(str) << std::endl;

	else std::cout << "Bad function number\n";
}


void FuncCalculator::helpScreen()
{
	std::cout << "The available commands are:\n";
	std::cout << "* eval(uate) num x - compute the result of function ";
	std::cout << "#num on the following x string\n";
	std::cout << "* substr(ing) num1 num2 - creates a substring starting ";
	std::cout << "from index num1 with the length of num2 characters\n";
	std::cout << "* add(on) num1 num2 - Creates an operation that is the ";
	std::cout << "concatenation of operation #num1 and operation #num2\n";
	std::cout << "* mul(tiply) n num - Creates an operation that is the ";
	std::cout << "multiply n of operation #num\n";
	std::cout << "* comp(osite) num1 num2 - creates an operation that is ";
	std::cout << "the composition of operation #num1 and operation #num2\n";
	std::cout << "* del(ete) num - delete operation #num from the operation list\n";
	std::cout << "* help - print this command list\n";
	std::cout << "* exit - exit the program\n";
}


void FuncCalculator::deleteFunc()
{
	int funcNumToDelete;

	std::cin >> funcNumToDelete;
	if(funcNumToDelete >= 0 && funcNumToDelete < m_functions.size())
		m_functions.erase(m_functions.begin() + funcNumToDelete);

	else std::cout << "Bad function number\n";

}

void FuncCalculator::addFunc(const std::string &usrInput)
{
	int num1, num2;
	std::cin >> num1 >> num2;

	if (usrInput == "substr")
		m_functions.push_back(make_shared<SubStr>(num1, num2));
	
	else if (num2 >= 0 && num2 < m_functions.size())
	{
		if(usrInput == "mul")
			m_functions.push_back(make_shared<Mul>(num1, m_functions[num2]));
	
		else if (num1 >= 0 && num1 < m_functions.size())
		{
			if (usrInput == "add")
				m_functions.push_back(make_shared<Add>(m_functions[num1], m_functions[num2]));

			else if (usrInput == "comp")
				m_functions.push_back(make_shared<Comp>(m_functions[num1], m_functions[num2]));
		}
	}

	else std::cout << "Bad function number\n";
}