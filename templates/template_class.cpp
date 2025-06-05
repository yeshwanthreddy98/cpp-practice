//#include<iostream>
//#include<string>
////
////// implatementation of class templates
////
////template
//
//// static variable in a template
//template<typename T>
//class A
//{
//public:
//	static int cnt;
//	T x;
//	A(T x) : x(x)
//	{
//		++cnt;
//	}
//};
//
//template<typename T>
//int A<T>::cnt = 0;
//
//int main()
//{
//	/*std::cout << typeid(10).name() << std::endl;*/
//	A<int> x1(10);
//	A<int> x2(20);
//
//	A<float> y1(10.38303f);
//	A<float> y2(20.83922f);
//
//	std::cout << x1.cnt << std::endl;
//	std::cout << y1.cnt << std::endl;
//
//}