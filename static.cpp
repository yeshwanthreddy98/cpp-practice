// static is used for 
// 1. make a variabl available even if its scope is over
// 2. static member variables and function for a class
// static is used in 3 cases 
// https://stackoverflow.com/questions/61321975/static-function-vs-static-member-functions-c
// https://stackoverflow.com/questions/15235526/the-static-keyword-and-its-various-uses-in-c


#include<iostream>
using namespace std;

//int main()
//{
//	{
//		int static_var = 0;
//		int non_static_var = 0;
//		cout << "values inside the block:" << static_var << " " << non_static_var << endl;
//	}
//	cout << "values outside the block:" << static_var << " " << non_static_var << endl;
//
//	return 0;
//}