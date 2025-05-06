//#include<iostream>
//#include<thread>
//#include<mutex>
//
//std::mutex mtx;
//
//void print(int x)
//{
//	std::lock_guard<std::mutex> lock(mtx);
//	if (x & 1) std::cout << x << " is odd" << std::endl;
//	else std::cout << x << " is even" << std::endl;
//}
//
////int main()
////{
////	std::thread th[10];
////	for (int i = 0;i < 10;++i)
////	{
////		th[i] = std::thread(print, i + 1);
////	}
////	for (int i = 0;i < 10;++i) th[i].join();
////	return 0;
////}