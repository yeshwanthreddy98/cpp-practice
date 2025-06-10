//// https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom?noredirect=1&lq=1
//
//#include<iostream>
//#include<algorithm>
//
//class Arr
//{
//public:
//	int size;
//	int* ptr;
//	Arr(int size) :size(size), ptr(new int[size]) {}
//
//	Arr(const Arr& oth) : size(oth.size), ptr(new int[oth.size])
//	{
//		for (int i = 0;i < size;++i) ptr[i] = oth.ptr[i];
//		std::cout << "copy cons" << std::endl;
//	}
//
//	//Arr& operator=(const Arr& oth)
//	//{
//	//	if (this != &oth)
//	//	{
//	//		delete[] ptr;
//	//		ptr = new int[oth.size];
//	//		size = oth.size;
//	//		for (int i = 0;i < size;++i) ptr[i] = oth.ptr[i];
//	//	}
//	//	return *this;
//	//}
//
//
//	//copy swap idiom
//	Arr& operator=(Arr oth)
//	{
//		std::swap(size, oth.size);
//		std::swap(ptr, oth.ptr);
//		return *this;
//	}
//
//
//
//	int& operator[](int idx)
//	{
//		return ptr[idx];
//	}
//
//	const int* begin()
//	{
//		return ptr;
//	}
//
//	const int* end()
//	{
//		return ptr + size;
//	}
//
//	~Arr()
//	{
//		delete[] ptr;
//		std::cout << "dest called" << std::endl;
//	}
//};
//
//int main()
//{
//	///*int a = 100, b = 100;
//	//std::cout << a << " " << b << std::endl;*/
//	//int dp[20];
//	//std::memset(dp, -1, sizeof(dp));
//	//for (auto it : dp) {
//	//	std::cout << it << " ";
//	//}
//	//std::cout << std::endl;
//
//	Arr arr(5);
//	for (int i = 0;i < 5;++i) arr[i] = i;
//	//for (const auto& it : arr) std::cout << it << std::endl;
//	Arr narr(5);
//	for (int i = 0;i < 5;++i) narr[i] = i * 10;
//	narr = arr;
//	for (const auto& it : narr) std::cout << it << std::endl;
//}