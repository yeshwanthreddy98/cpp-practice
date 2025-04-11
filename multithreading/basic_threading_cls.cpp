#include<iostream>
#include <thread>
using namespace std;
void sum(int n)
{
	int s = 0;
	for (int i = 0;i < n;i++)
		s += i;
	cout << s << endl;
}
void print(int n)
{
	for (int i = 0;i < n;i++)
		cout << i << endl;
}

int main()
{
	//std::thread th(sum, 10);
	std::thread pr(print, 10);
	pr.detach();
	for (int i = 100;i < 110;i++)
		cout << i << endl;
	//th.join();
	//pr.join();
	return 0;
}