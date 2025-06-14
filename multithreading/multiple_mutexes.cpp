//#include<iostream>
//#include<mutex>
//#include<thread>
//
//std::mutex m1, m2;
////int var = 0;
//
//void fun1(long long& var)
//{
//	m1.lock();
//	for (int i = 0;i < 1000000000;++i) ++var;
//	m1.unlock();
//}
//
//void fun2(long long& var)
//{
//	m2.lock();
//	for (int i = 0;i < 100000000;++i) ++var;
//	m2.unlock();
//}
//
//int main()
//{
//	for (int i = 0;i < 100;++i)
//	{
//		long long var = 0;
//		auto th1 = std::thread(fun1, std::ref(var));
//		auto th2 = std::thread(fun2, std::ref(var));
//		th1.join();
//		th2.join();
//		std::cout << var << std::endl;
//	}
//}