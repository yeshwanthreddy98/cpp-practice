#include<stdio.h>
//#include<string>

//overload the left shift and right shift operators to 
// implement console input and output

class Ostream
{
public:
	void operator<<(const char* ptr)
	{
		printf("%s", ptr);
	}
};

//int main()
//{
//	Ostream cout;
//	cout << "hello world";
//	return 0;
//}