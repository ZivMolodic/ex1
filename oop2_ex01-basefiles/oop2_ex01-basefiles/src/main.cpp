<<<<<<< HEAD
#include "FuncCalculator.h"

int main()
{
	FuncCalculator funcCalc;

	funcCalc.run();
=======
#include "Functions.h"
#include <vector>

int main()
{
	std::string str = "Hello World";
	auto id = std::make_shared<Id>();
	std::shared_ptr<Function> test = id;
	std::cout << "ID: " << test->action(str) << std::endl;

	auto swap = std::make_shared<SwapCase>(SwapCase());
	std::cout << "SwapCase: " << swap->action(str) << std::endl;

	auto reverse = Reverse();
	std::cout << "Reverse: " << reverse.action(str) << std::endl;

	auto substr = SubStr(2, 70);
	std::cout << "SubStr: " << substr.action(str) << std::endl;

	auto mul = std::make_shared<Mul>(Mul(4, id));
	std::cout << "Mul: " << mul->action(str) << std::endl;

	auto mul2 = std::make_shared<Mul>(Mul(2, mul));
	std::cout << "Mul 2: " << mul2->action(str) << std::endl;

	auto add = std::make_shared<Add>(Add(mul, swap));
	std::cout << "Add: " << add->action(str) << std::endl;

	auto add2 = std::make_shared<Add>(Add(add, swap));
	std::cout << "Add2: " << add2->action(str) << std::endl;

	auto comp = std::make_shared<Comp>(Comp(swap, mul));
	std::cout << "Comp: " << comp->action(str) << std::endl;

	std::vector <std::shared_ptr< Function >> funcs = { id, swap, mul, mul2, add, add2, comp };
	for (size_t i = 0; i < funcs.size(); i++)
		std::cout << i << ".    " << funcs[i]->print() << std::endl;
>>>>>>> origin/main
}
