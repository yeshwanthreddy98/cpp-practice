// this module demonstrates templates
// https://www.geeksforgeeks.org/templates-cpp/
// In template definitions, typename provides a hint to the compiler that an unknown identifier is a type

#include<iostream>

//function templates

// ensure for a tempate the compiler must be able to figure out respective code while compilation
// all the types you induce into a template must be able to be deduced before before linking

//template<typename param1, typename param2>
template<typename param1>
param1 square(param1 var)
{
	return var * var;
}

//https://stackoverflow.com/questions/2023977/what-is-the-difference-between-typename-and-class-template-parameters
//https://stackoverflow.com/questions/8501644/dynamically-changing-the-size-of-the-pointer-in-c
//https://stackoverflow.com/questions/2543205/define-a-struct-inside-a-class-in-c
//https://stackoverflow.com/questions/1657883/variable-number-of-arguments-in-c


class Multivector
{
	template< typename T>
	struct node
	{
		T data;
		void* next = nullptr;
	};
	void* head = nullptr;
	void* tail = nullptr;
public:

	template<typename T>
	Multivector(T data)
	{
		head = new node<T>;
		node<T>* curr = (node<T>*)head;
		curr->data = data;

	}

	template<typename T>
	void push_back(T data)
	{

	}

};



//int main()
//{
//	std::cout << square(10) << std::endl;
//	std::cout << square(2.5) << std::endl;
//	std::cout << typeid(square(7456476ll)).name() << std::endl;
//}