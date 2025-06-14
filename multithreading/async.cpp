//#include<iostream>
//#include<thread>
//#include<future>
//#include<chrono>
//
//int fun(std::promise<int>&& prom, int val)
//{
//	std::cout << "thread started\n";
//	std::this_thread::sleep_for(std::chrono::seconds(1));
//	prom.set_value(val);
//	std::this_thread::sleep_for(std::chrono::seconds(5));
//	return INT_MAX;
//}
//
//int main()
//{
//	//std::future<int> fut = std::async(std::launch::async, fun);
//	std::promise<int> prom;
//	std::future<int> fut = prom.get_future();
//	std::future<int> return_val = std::async(std::launch::async, fun, std::move(prom), 10);
//	std::cout << fut.get() << std::endl << return_val.get();
//	return 0;
//}