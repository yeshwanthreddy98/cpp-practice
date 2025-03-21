#include<iostream>
//https://stackoverflow.com/questions/356950/what-are-c-functors-and-their-uses

void printfibo(int n)
{
	long long temp1 = 0, temp2 = 1;
	std::cout << temp1 << " " << temp2 << " ";
	for (int i = 3;i <= n;i++) {
		long long temp3 = temp1 + temp2;
		temp1 = temp2;
		temp2 = temp3;
		std::cout << temp2 << " ";
	}
}

//int main()
//{
//	void(*fiboptr)(int);
//	fiboptr = printfibo;
//	fiboptr(10);
//}