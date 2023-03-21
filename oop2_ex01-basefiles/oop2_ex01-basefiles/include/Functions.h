#pragma once
#include <iostream>

/*
	the abtsract class of all functions 
*/
class Function
{
public:
	//Function();
	~Function() {};
	virtual std::string action(const std::string& string) = 0;
	virtual std::string print() = 0;
};

class Id : public Function
{
public:
	virtual std::string action(const std::string& string) override { return string; }
	virtual std::string print() override { return "id"; }
};

class SwapCase : public Function
{
public:
	virtual std::string action(const std::string& string) override;
	virtual std::string print() override { return "swapCase"; }
};

class Reverse : public Function
{
public:
	virtual std::string action(const std::string& string) override;
	virtual std::string print() override { return "reverse"; }
};

class SubStr : public Function
{
public:
	SubStr(unsigned int head, unsigned int length): m_head(head), m_length(length) {}
	virtual std::string action(const std::string& string) override;
	virtual std::string print() override;
private:
	unsigned int m_head;
	unsigned int m_length;
};

class Mul : public Function
{
public:
	Mul(int times, const std::shared_ptr<Function> & func): m_times(times), m_func(func){}
	virtual std::string action(const std::string& string) override;
	virtual std::string print() override;

private:
	std::shared_ptr<Function> m_func;
	int m_times;
};

class Add : public Function
{
public:
	Add(const std::shared_ptr<Function> & func1, const std::shared_ptr<Function>& func2): m_func1(func1), m_func2(func2){}
	virtual std::string action(const std::string& string) override;
	virtual std::string print() override;

private:
	std::shared_ptr<Function> m_func1;
	std::shared_ptr<Function> m_func2;
};

class Comp : public Function
{
public:
	Comp(const std::shared_ptr<Function>& func1, const std::shared_ptr<Function>& func2) : m_func1(func1), m_func2(func2) {}
	virtual std::string action(const std::string& string) override;
	virtual std::string print() override;

private:
	std::shared_ptr<Function> m_func1;
	std::shared_ptr<Function> m_func2;
};