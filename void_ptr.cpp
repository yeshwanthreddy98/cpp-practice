#include<iostream>
struct node
{
	int data;
	node* next;
};

//int main()
//{
//	//void* ptr;
//	//ptr = new node;
//	//ptr = (node*)ptr;
//	////((node*)ptr)->data = 3;
//	////((node*)ptr)->next = new node;
//
//	////int a = 1;
//	////ptr = &a;
//	///*std::cout << ptr->data << std::endl << typeid(ptr).name() << std::endl;*/
//	//std::cout << sizeof(ptr) << std::endl;
//	int* ptr = nullptr;
//	delete ptr;
//	std::cout << "nullptr deleted" << std::endl;
//}