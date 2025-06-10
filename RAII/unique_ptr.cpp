//#include<iostream>
////using namespace std;
//
////template<typename T>
////class unique_ptr
////{
////private:
////	T* ptr;
////public:
////	explicit unique_ptr(T* addr) :ptr(addr)
////	{
////		std::cout << "cons" << std::endl;
////	}
////	~unique_ptr()
////	{
////		delete ptr;
////		std::cout << "dest" << std::endl;
////	}
////	unique_ptr(const unique_ptr& oth) = delete;
////	unique_ptr& operator=(const unique_ptr& oth) = delete;
////	unique_ptr(unique_ptr&& oth) noexcept
////	{
////		ptr = oth.ptr;
////		oth.ptr = nullptr;
////		std::cout << "move cons\n";
////	}
////	unique_ptr& operator=(unique_ptr&& oth) noexcept
////	{
////		delete ptr;
////		ptr = oth.ptr;
////		oth.ptr = nullptr;
////		std::cout << "move assign\n";
////	}
////	T& operator*()
////	{
////		return *ptr;
////	}
////
////};
//
//class Sample
//{
//public:
//	int x;
//	Sample(int x) :x(x) {}
//};
//
//int main()
//{
//	//unique_ptr<int> ptr = new int(10);
//	//std::cout << *ptr << std::endl;
//	//unique_ptr<int> nptr = std::move(ptr);
//	///*std::cout << *ptr << std::endl;*/
//	//std::cout << *nptr << std::endl;
//	//unique_ptr<int> aptr = new int(20);
//	//aptr = std::move(nptr);
//	////std::cout << *nptr << std::endl;
//	//std::cout << *aptr << std::endl;
//	//std::unique_ptr<Sample> ptr(new Sample(10));
//	//std::unique_ptr<Sample> ptr = std::make_unique<Sample>(10);
//	//std::cout << ptr->x << std::endl;
//
//}