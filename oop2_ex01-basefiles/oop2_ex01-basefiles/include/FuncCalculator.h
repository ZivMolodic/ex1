#include <iostream>
#include <vector>

class FuncCalculator {
public:
	FuncCalculator();
	void run();

private:
	std::vector<std::shared_ptr<Function>> m_functions;
};