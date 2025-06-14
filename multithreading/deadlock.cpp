//#include<iostream>
//#include<mutex>
//#include<thread>
//#include<chrono>
//
//
//std::mutex m1, m2;
//
//void fun1()
//{
//	m1.lock();
//	std::this_thread::sleep_for(std::chrono::seconds(1));
//	m2.lock();
//	std::cout << "thread fun1" << std::endl;
//	m2.unlock();
//	m1.unlock();
//}
//
//void fun2()
//{
//	m2.lock();
//	std::this_thread::sleep_for(std::chrono::seconds(1));
//	m1.lock();
//	std::cout << "thread fun2" << std::endl;
//	m1.unlock();
//	m2.unlock();
//}
//
//int main()
//{
//
//	auto th1 = std::thread(fun1);
//	auto th2 = std::thread(fun2);
//
//	th1.join();
//	th2.join();
//
//}