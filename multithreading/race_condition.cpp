//#include<iostream>
//#include<thread>

////https://stackoverflow.com/questions/34510/what-is-a-race-condition
//https://medium.com/@abhishekjainindore24/mutex-in-c-threads-part-1-45aeac3ab62d#:~:text=To%20use%20a%20mutex%20in,to%20access%20the%20critical%20section.
//https://stackoverflow.com/questions/32145227/why-2-threads-incrementing-one-variable-can-result-in-different-outputs

#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

int counter = 0;

void incrementCounter() {
	for (int i = 0; i < 100000; ++i) {
		mtx.lock();
		++counter;
		mtx.unlock();
	}
}

//int main() {
//	std::thread t1(incrementCounter);
//	std::thread t2(incrementCounter);
//
//	t1.join();
//	t2.join();
//
//	std::cout << "Final counter value: " << counter << std::endl;
//	return 0;
//}



//void fun1(int& x)
//{
//	int local = 0;
//	while (x < 10000) {
//
//
//		x++;
//		local++;
//	}
//	std::cout << "thread1 : " << local << std::endl;
//}
//
//void fun2(int& x) {
//	int local = 0;
//	while (x < 10000) {
//		x++;
//		local++;
//	}
//	std::cout << "thread2 : " << local << std::endl;
//}
//
//int main()
//{
//	int x = 0;
//	std::thread th1(&fun1, std::ref(x));
//	std::thread th2(&fun2, std::ref(x));
//	th1.join();
//	th2.join();
//	std::cout << x << std::endl;
//}