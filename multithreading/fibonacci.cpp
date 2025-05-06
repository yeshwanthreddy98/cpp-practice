#include<iostream>
#include<thread>
#include<chrono>
#include<iomanip>

void fibo(long long n, long long& ans)
{
	if (n == 0 || n == 1) ans = n;
	else {
		long long prev1, prev2;
		fibo(n - 1, prev1);
		fibo(n - 2, prev2);
		ans = prev1 + prev2;
	}
}

void fibo_multi(long long n, long long& ans)
{
	if (n == 0 || n == 1) ans = n;
	else {
		long long prev1, prev2;
		std::thread th1(fibo, n - 1, std::ref(prev1));
		std::thread th2(fibo, n - 2, std::ref(prev2));
		th1.join();
		th2.join();
		ans = prev1 + prev2;
	}
}

//int main()
//{
//	std::cout << "runtime is in milliseconds" << std::endl;
//	for (long long i = 0;i <= 50;i++) {
//
//		long long ans;
//		auto start = std::chrono::high_resolution_clock::now();
//		fibo(i, ans);
//		auto end = std::chrono::high_resolution_clock::now();
//		std::chrono::duration<double> runtime = end - start;
//
//		long long ans_m;
//		auto start_m = std::chrono::high_resolution_clock::now();
//		fibo_multi(i, ans_m);
//		auto end_m = std::chrono::high_resolution_clock::now();
//		std::chrono::duration<double> runtime_m = end_m - start_m;
//
//		std::cout << "input: " << std::setw(8) << i << " output: " << std::setw(8) << ans << " runtime: "
//			<< std::setw(8) << runtime.count() * 1000 << " output_multithreading: " << std::setw(8) << ans_m
//			<< " runtime_multithreading: " << std::setw(8) << runtime_m.count() * 1000 << std::endl;
//	}
//	return 0;
//}