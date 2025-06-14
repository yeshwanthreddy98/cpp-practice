//#include<iostream>
//#include<thread>
//#include<chrono>
//#include<iomanip>
//#include<mutex>
//#include<vector>
//#include<condition_variable>
//
////https://stackoverflow.com/questions/43019598/stdlock-guard-or-stdscoped-lock
//
//std::mutex mtx;
//std::condition_variable cv;
//int synchro = 0;
//
//void swap(int& a, int& b, int priority)
//{
//	std::unique_lock<std::mutex> guard(mtx);
//	cv.wait(guard, [&] {return priority == synchro;});
//	int temp = a;
//	a = b;
//	b = temp;
//	++synchro;
//	cv.notify_all();
//}
//
//int main()
//{
//	int a = 1, b = 2, c = 3;
//	std::vector<std::thread> threads;
//	threads.emplace_back(std::thread(swap, std::ref(a), std::ref(b), 0));
//	threads.emplace_back(std::thread(swap, std::ref(b), std::ref(c), 1));
//	threads.emplace_back(std::thread(swap, std::ref(c), std::ref(a), 2));
//	for (auto& thread : threads) thread.join();
//	// expected output: 1 3 2
//	std::cout << a << " " << b << " " << c << std::endl;
//	return 0;
//}