#include<iostream>
#include<string>
using namespace std;

template< typename T>
struct node
{
	T data;
	int cnt;
};

//int main()
//{
//	//node<char> ans{ 'a', 1 };
//	//node<std::string> res{ "abcdeft", 1 };
//	//std::cout << res.data << " " << res.cnt << std::endl;
//
//	node<double>* ptr = new node<double>;
//	ptr->data = 3.06;
//	ptr->cnt = 1;
//	int* iptr = new int;
//	*iptr = 2;
//	cout << *iptr << ptr << endl;
//}