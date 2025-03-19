#include<iostream>

class Multiplier
{
public:
	int factor;
	Multiplier(int f) : factor(f) {}
	int operator()(int value)
	{
		return value * factor;
	}
};

int a = 10;

int func(const int& val)
{
	//val = 20;
	return val;
}

int main()
{
	//Multiplier times4(4);
	//std::cout << times4(5) << std::endl;
	int val = 10;
	std::cout << func(10) << std::endl;
}