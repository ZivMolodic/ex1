#include "Functions.h"
#include <string>

std::string SwapCase::action(const std::string& string)
{
	auto str = string;
	for (size_t i = 0; i < string.size(); i++)
	{
		if (isupper(string[i]))
			str[i] = tolower(string[i]);

		else if (islower(string[i]))
			str[i] = toupper(string[i]);
	}

	return str;
}

std::string Reverse::action(const std::string& string)
{
	auto str = string;
	for (size_t i = 0; i < string.size() / 2; i++)
		std::swap(str[i], str[str.size() - (i+1)]);

	return str;
}

std::string SubStr::action(const std::string& string)
{
	return  string.substr(m_head, m_length);
}
std::string SubStr::print()
{
	std::string str = "substr_" + std::to_string(m_head) + "_" + std::to_string(m_length);

	return str;
}

std::string Mul::action(const std::string& string)
{
	auto mulStr = m_func->action(string);
	for(int i =1; i < m_times; i++)
		mulStr += m_func->action(string);

	return mulStr;
}
std::string Mul::print()
{
	std::string str = m_func->print() + " * " + std::to_string(m_times);

	return str;
}

std::string Add::action(const std::string& string)
{
	return m_func1->action(string) + m_func2->action(string);
}
std::string Add::print()
{
	std::string str = m_func1->print() + " + " + m_func2->print();

	return str;
}

std::string Comp::action(const std::string& string)
{
	return m_func2->action(m_func1->action(string));
}
std::string Comp::print()
{
	std::string str = "(" + m_func1->print() + ") -> (" + m_func2->print() + ")";

	return str;
}