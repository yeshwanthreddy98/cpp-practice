//#include<iostream>
//#include<thread>
//#include<chrono>
//#include<iomanip>
//#include<mutex>
//#include<vector>
//
////https://stackoverflow.com/questions/43019598/stdlock-guard-or-stdscoped-lock
//
//std::mutex mtx;
//
//
//void swap(int& a, int& b)
//{
//	std::lock_guard<std::mutex> guard(mtx);
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 1, b = 2, c = 3;
//	std::vector<std::thread> threads;
//	threads.emplace_back(std::thread(swap, std::ref(a), std::ref(b)));
//	threads.emplace_back(std::thread(swap, std::ref(b), std::ref(c)));
//	threads.emplace_back(std::thread(swap, std::ref(c), std::ref(a)));
//	for (auto& thread : threads) thread.join();
//	// expected output: 1 3 2
//	std::cout << a << " " << b << " " << c << std::endl;
//}











// --------------- gpt code --------------

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

// Mutexes for individual variables
std::mutex mtx_a, mtx_b, mtx_c;

void swap(int& a, int& b, std::mutex& mtx_a, std::mutex& mtx_b) {
	// Lock the two mutexes without deadlock
	std::lock(mtx_a, mtx_b);
	// Use lock guards to manage the locked mutexes
	std::lock_guard<std::mutex> lock_a(mtx_a, std::adopt_lock);
	std::lock_guard<std::mutex> lock_b(mtx_b, std::adopt_lock);

	// Perform the swap
	int temp = a;
	a = b;
	b = temp;
}

//int main() {
//	int a = 1, b = 2, c = 3;
//
//	std::vector<std::thread> threads;
//
//	// Pass the relevant mutexes alongside variables to swap()
//	threads.emplace_back(std::thread(swap, std::ref(a), std::ref(b), std::ref(mtx_a), std::ref(mtx_b)));
//	threads.emplace_back(std::thread(swap, std::ref(b), std::ref(c), std::ref(mtx_b), std::ref(mtx_c)));
//	threads.emplace_back(std::thread(swap, std::ref(c), std::ref(a), std::ref(mtx_c), std::ref(mtx_a)));
//
//	// Join all threads
//	for (auto& thread : threads) thread.join();
//
//	// Output the result
//	std::cout << a << " " << b << " " << c << std::endl;
//
//	return 0;
//}