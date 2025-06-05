//// protected memebers are available to derived classes
//
//#include<iostream>
//class Sample
//{
//private:
//	//int p;
//protected:
//	int a;
//public:
//	Sample() :a(10) {}
//	void disp()
//	{
//		std::cout << a << std::endl;
//	}
//};
//
//class Child : public Sample
//{
//	//public:
//	//	int x = a;
//public:
//	int x = a;
//
//};
//
//class Grand :public Child
//{
//public:
//	int y = a;
//};
//
//int main()
//{
//	Sample s;
//	Child ch;
//	Grand g;
//	s.disp();
//	ch.disp();
//	g.disp();
//}