//#include "class.h"
//#include<iostream>
//
//class Sample
//{
//public:
//	int* ptr;
//	int var;
//
//
//	explicit Sample(int var, int x) : var(var)
//	{
//		ptr = new int(x);
//		std::cout << "cons called" << std::endl;
//	}
//	~Sample()
//	{
//		delete ptr;
//		std::cout << "dest called" << std::endl;
//	}
//	Sample(const Sample& other)
//	{
//		var = other.var;
//		ptr = new int(*other.ptr);
//	}
//	Sample(Sample&& other) noexcept : var(other.var), ptr(other.ptr)
//	{
//		other.ptr = nullptr;
//	}
//	Sample& operator=(const Sample& rhs)
//	{
//		if (this != &rhs)
//		{
//			this->var = rhs.var;
//			delete ptr;
//			this->ptr = new int(*rhs.ptr);
//		}
//		return *this;
//	}
//	Sample& operator=(Sample&& rhs) noexcept
//	{
//		if (this != &rhs)
//		{
//			this->var = rhs.var;
//			delete ptr;
//			this->ptr = rhs.ptr;
//			rhs.ptr = nullptr;
//		}
//		return *this;
//	}
//	Sample& operator++()
//	{
//		var = var + 1;
//		*ptr = *ptr + 1;
//		return *this;
//	}
//
//	Sample operator++(int)
//	{
//		Sample temp(*this);
//		++(*this);
//		return temp;
//	}
//
//};