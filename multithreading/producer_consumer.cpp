//#include<iostream>
//#include<stack>
//#include<thread>
//#include<mutex>
//#include<condition_variable>
//
//std::stack<int> st;
//int maxi = 20;
//int value = 100;
//std::mutex mtx;
//std::condition_variable cv;
//
//void producer()
//{
//	while (value)
//	{
//		std::unique_lock<std::mutex> ul(mtx);
//		cv.wait(ul, [] { return st.size() <= maxi;});
//		st.push(value);
//		std::cout << "produced: " << value << std::endl;
//		--value;
//		ul.unlock();
//		cv.notify_all();
//	}
//}
//
//void consumer()
//{
//	while (true)
//	{
//		std::unique_lock<std::mutex> ul(mtx);
//		cv.wait(ul, [] {return !st.empty();});
//		std::cout << "consumed: " << st.top() << std::endl;
//		st.pop();
//		ul.unlock();
//		cv.notify_all();
//	}
//}
//
//int main()
//{
//	auto prod = std::thread(producer);
//	auto cons = std::thread(consumer);
//	prod.join();
//	cons.join();
//}