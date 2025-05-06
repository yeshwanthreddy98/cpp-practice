#include<iostream>
#include "Header.h"
#include<thread>

int increment(int x)
{
	return x + 1;
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
//	std::thread th(increment, 10);
//	th.join();
//	//std::cout << x << std::endl;
//}