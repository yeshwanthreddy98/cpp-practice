//#include<iostream>
//
//class Base {
//public:
//	virtual void disp() const
//	{
//		std::cout << "this is base" << std::endl;
//	}
//};
//
//class Derived1 :public Base
//{
//public:
//	void fun()
//	{
//		std::cout << "derivedd1" << std::endl;
//	}
//};
//
//class Derived2 :public Base {};
//
//int main()
//{
//	//Base* bptr = new Derived1;
//	////bptr->disp();
//	///*bptr->fun();*/
//	//Derived2* dptr = dynamic_cast<Derived2*>(bptr);
//	//if (dptr) std::cout << "not null" << std::endl;
//	//else std::cout << "null" << std::endl;
//	Derived1* dptr = new Derived1;
//	Base* bptr = (Base*)dptr;
//	bptr->disp();
//	if (bptr) std::cout << "not null" << std::endl;
//	else std::cout << "null" << std::endl;
//}