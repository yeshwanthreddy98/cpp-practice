#include<iostream>
#include<thread>


void fib(int& n)
{
	std::cout << "fibonacci started thread started with id: " << std::this_thread::get_id() << std::endl;
	int temp1 = 1, temp2 = 2;
	for (int i = 1;i <= n;++i)
	{
		if (i == 1) std::cout << " 1 num: " << temp1 << std::endl;
		else if (i == 2)  std::cout << " 2 num: " << temp2 << std::endl;
		else {
			int curr = temp1 + temp2;
			std::cout << " " << i << " num: " << curr << std::endl;
			temp1 = temp2;
			temp2 = curr;
		}
	}
	n = n + 1;
}

int main()
{
	int x = 10;
	std::cout << "main thread started with id: " << std::this_thread::get_id() << std::endl;
	std::thread th(fib, std::ref(x));
	th.join();
}