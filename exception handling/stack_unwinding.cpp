//#include<iostream>
//
//class A
//{
//public:
//	A()
//	{
//		std::cout << "A()" << std::endl;
//	}
//	~A()
//	{
//		std::cout << "~A()" << std::endl;
//	}
//};
//
//class B :public A
//{
//public:
//	B()
//	{
//		//try {
//		//	throw std::runtime_error(" ");
//		//}
//		//catch (...) {
//		//	std::cout << "caught\n";
//		//}
//		//std::cout << "after caught\n";
//		throw std::runtime_error("error");
//	}
//	~B()
//	{
//		std::cout << "b dest" << std::endl;
//	}
//};
//
//void fun()
//{
//	A a;
//	throw std::runtime_error("error");
//}
//
//int main()
//{
//	//try {
//	//	throw std::runtime_error(" ");
//	//}
//	//catch (...) {
//	//	std::cout << "caught\n";
//	//}
//	//std::cout << "after caught\n";
//	try {
//		B b;
//	}
//	catch (...) {
//		std::cout << "caught" << std::endl;
//	}
//	std::cout << "after catch" << std::endl;
//}