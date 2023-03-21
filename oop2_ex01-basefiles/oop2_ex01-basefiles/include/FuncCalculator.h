#include <iostream>
#include <vector>
<<<<<<< HEAD
#include "Function.h"
=======
#include "Functions.h"
>>>>>>> origin/main

class FuncCalculator {
public:
	FuncCalculator();
	void run();

private:
	void printFuncMenu();
	void calc();
	void helpScreen();
	void addFunc(const std::string&);
	void deleteFunc();
	std::vector<std::shared_ptr<Function>> m_functions;
};