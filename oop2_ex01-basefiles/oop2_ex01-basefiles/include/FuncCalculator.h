#include <iostream>
#include <vector>
#include "Function.h"

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