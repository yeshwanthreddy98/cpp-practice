#include<iostream>
#include<thread>
#include<chrono>
#include<iomanip>
#include<mutex>
#include<vector>

//https://stackoverflow.com/questions/43019598/stdlock-guard-or-stdscoped-lock

std::mutex mtx;


void swap(int& a, int& b)
{
	std::lock_guard<std::mutex> lg(mtx);
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 1, b = 2, c = 3;
	std::vector<std::thread> threads;
	threads.emplace_back(std::thread(swap, std::ref(a), std::ref(b)));
	threads.emplace_back(std::thread(swap, std::ref(b), std::ref(c)));
	threads.emplace_back(std::thread(swap, std::ref(c), std::ref(a)));
	for (auto& thread : threads) thread.join();
	// expected output: 1 3 2
	std::cout << a << " " << b << " " << c << std::endl;
}