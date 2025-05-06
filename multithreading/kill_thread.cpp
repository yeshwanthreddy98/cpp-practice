#include<iostream>
#include "Header.h"
#include<thread>
#include<chrono>

void increment(int& x)
{
	++x;
	//std::cout << x << std::endl;
}

//int main()
//{
//	//thread_local int cnt = 2;
//	//std::thread th1(fib, std::ref(cnt));
//	//std::thread th2(fib, std::ref(cnt));
//	//th1.join();
//	//th2.join();
//	//std::cout << cnt << std::endl;
//	//return 0;
//	// 
//	auto start = std::chrono::high_resolution_clock::now();
//	int x = 10;
//	std::thread th(increment, std::ref(x));
//	th.detach();
//	std::cout << x << std::endl;
//	std::this_thread::sleep_for(std::chrono::seconds(1));
//	std::cout << x << std::endl;
//	auto end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> runtime = end - start;
//	std::cout << "runtime: " << runtime.count() << std::endl;
//}