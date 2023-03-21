#include <iostream>
#include <vector>
#include "Functions.h"

class FuncCalculator {
public:
	FuncCalculator();
	void run();

private:
	std::vector<std::shared_ptr<Function>> m_functions;
};