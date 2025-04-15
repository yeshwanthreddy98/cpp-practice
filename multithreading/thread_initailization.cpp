#include<iostream>
#include<thread>
//https://stackoverflow.com/questions/10673585/start-thread-with-member-function
//https://cplusplus.com/forum/beginner/115115/

void fib(int n)
{
	std::cout << "fibonacci started" << std::endl;
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
}

class Sample
{
public:
	void operator()()
	{
		std::cout << "overloading () opeator on Sample class object" << std::endl;
	}
	void hv() {
		std::cout << "function of sample" << std::endl;
	}
};


int main()
{

	std::thread fbr(fib, 10);
	std::thread th([]() {std::cout << "thread" << std::endl;});
	std::cout << "main_Thread started" << std::endl;
	fbr.join();
	std::cout << "sub_thread joined" << std::endl;
	th.join();
	std::thread hv(&Sample::hv, Sample());
	std::thread op(&Sample::operator(), Sample());
	op.join();
	hv.join();


	return 0;
}