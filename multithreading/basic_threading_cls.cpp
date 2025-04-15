#include<iostream>
#include <thread>

//https ://github.com/methylDragon/coding-notes/blob/master/C++/07%20C++%20-%20Threading%20and%20Concurrency.md
//https://www.bogotobogo.com/cplusplus/files/CplusplusConcurrencyInAction_PracticalMultithreading.pdf

using namespace std;
void sum(int n)
{
	int s = 0;
	for (int i = 0;i < n;i++) {
		s += i;
		cout << "sum sub thread: " << s << endl;
	}
}
void print(int n)
{
	for (int i = 0;i < n;i++)
		/*cout << i << endl;*/
		cout << "sub_thread\n";
}

//int main()
//{
//	////std::thread th(sum, 10);
//	//std::thread pr(print, 10);
//	//std::thread kr(sum, 20);
//	///*pr.detach();*/
//	//for (int i = 70;i < 110;i++)
//	//	/*cout << i << endl;*/
//	//	cout << "main_thread\n";
//
//	////th.join();
//	//kr.join();
//	//pr.join();
//
//	/*
//	You can find the maximum number of active threads that you can start.
//	If your number of active threads exceeds this number you won't really get more performance out of it, so take note!
//	*/
//	unsigned int maxi = std::thread::hardware_concurrency();
//	std::cout << maxi << std::endl;
//	return 0;
//}