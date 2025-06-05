////#include<iostream>
////struct X {
////	X() = delete;
////	int n = 10;
////};
////
////class A
////{
////public:
////	A() = delete;
////	int n = 10;
////};
////
////int main()
////{
////
////	//auto x1 = X();  // error!
////	auto x2 = X{};  // perfectly fine
////	/*std::cout << typeid(x2).name() << std::endl;*/
////	/*std::cout << x2.n << std::endl;*/
////	std::cout << X{}.n << std::endl;
////
////	std::cout << A{}.n << std::endl;
////}
//
//#include<iostream>
//
//int main()
//{
//	int* ptr{ (int*)malloc(sizeof(int)) };
//	std::cout << *ptr << std::endl;
//	ptr = (int*)calloc(2, sizeof(int));
//	ptr[0] = 10;
//	ptr[1] = 12;
//	std::cout << ptr[1] << std::endl;
//	int* nptr = (int*)realloc(ptr, 3 * sizeof(int));
//	std::cout << ptr[1] << std::endl;
//	std::cout << nptr[0] << std::endl;
//	/*free(ptr);*/
//	free(nptr);
//}