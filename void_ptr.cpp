#include<iostream>

int main()
{
	void* ptr = nullptr;
	//int a = 1;
	//ptr = &a;
	std::cout << ptr << std::endl << typeid(ptr).name() << std::endl;
}