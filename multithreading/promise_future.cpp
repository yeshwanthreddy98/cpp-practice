//#include<iostream>
//#include<thread>
//#include<future>
//#include<chrono>
//
//void fun(std::promise<int>&& prom, int val)
//{
//	std::cout << "thread started\n";
//	std::this_thread::sleep_for(std::chrono::seconds(5));
//	prom.set_value(val);
//	std::this_thread::sleep_for(std::chrono::seconds(5));
//}
//
//int main()
//{
//	std::promise<int> prom;
//	std::future<int> fut = prom.get_future();
//	auto th = std::thread(fun, std::move(prom), 10);
//	std::cout << "waiting for value: " << fut.get() << std::endl;
//	//std::cout << "waiting for thread to complete";
//	th.join();
//}