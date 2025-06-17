//// for singleton only one instance is present
//// which is static
//#include<iostream>
//
//class Singleton {
//private:
//	Singleton()
//	{
//		std::cout << "cons" << std::endl;
//	}
//	static Singleton s_instance;
//	/*int var;*/
//public:
//	static Singleton& get()
//	{
//		std::cout << "get called" << std::endl;
//		return s_instance;
//	}
//
//	/*void print();*/
//};
//
//Singleton Singleton::s_instance;
////void Singleton::print() {
////	std::cout << "fun defination" << std::endl;
////	int var = 10;
////}
//
//int main()
//{
//	Singleton& ins = Singleton::get();
//	/*ins.print();*/
//	return 0;
//}
//
////in the above implementation single static instance
////is present irresepective of called or not
