#include<iostream>
//https://stackoverflow.com/questions/4705593/int-vs-const-int
//https://medium.com/@visheshchovatiya/lvalue-rvalue-and-their-references-with-example-in-c-92d80a801f19
// move constructor idea is from rvalue and lvalue concept

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

//int func(const int& val)
//{
//	//val = 20;
//	return val;
//}
void func(const std::string& str)
{
	//val = 20;
	std::cout << "rvalue" << std::endl;

}

void func(std::string&& str)
{
	std::cout << "lvalue" << std::endl;
}




//int main()
//{
//	//Multiplier times4(4);
//	//std::cout << times4(5) << std::endl;
//	//int val = 10;
//	//std::cout << func(10) << std::endl;
//	std::string arr[3]{ "abc","hi","hello" };
//	std::string name = "srh";
//	func(name);
//	func(arr[0]);
//	func("hello world");
//	/*std::cout << func(arr[1]) << std::endl;*/
//	//const int& res = 5;
//	//int a = 10;
//	//int& ans = a;
//	//std::cout << sizeof(res) << std::endl;
//	//std::cout << typeid(res).name() << std::endl;
//	//std::cout << sizeof(ans) << std::endl;
//	//std::cout << typeid(ans).name() << std::endl;
//}