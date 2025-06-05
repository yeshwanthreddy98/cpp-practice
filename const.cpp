//#include<iostream>
//
//class Sample
//{
//public:
//	int var;
//	Sample(int x) : var(x)
//	{
//		std::cout << "inside sample class constructor" << std::endl;
//	}
//
//	void cprint() const
//	{
//		std::cout << "const print var: " << var << std::endl;
//	}
//
//	void print()
//	{
//		std::cout << "print var: " << var << std::endl;
//	}
//};
//
//
//int main()
//{
//	const Sample cobj(10);
//	Sample obj(20);
//	cobj.cprint();
//	/*cobj.print()*/
//	obj.cprint();
//	obj.print();
//}