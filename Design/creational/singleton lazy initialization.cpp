//#include<iostream>
//
//class Singleton {
//	Singleton() {
//		std::cout << "cons called" << std::endl;
//	}
//	static Singleton* instance;
//
//public:
//	static Singleton* get()
//	{
//		if (instance == nullptr)
//			instance = new Singleton();
//		return instance;
//	}
//	void fun()
//	{
//		std::cout << "singleton function" << std::endl;
//	}
//	~Singleton()
//	{
//		std::cout << "dest called" << std::endl;
//	}
//};
//
//Singleton* Singleton::instance = nullptr;
//
//int main()
//{
//	Singleton* ins = Singleton::get();
//	ins->fun();
//}
//
