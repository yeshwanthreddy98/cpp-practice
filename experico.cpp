//#include<iostream>
//#include <string>
////class Sample
////{
////public:
////	int n;
////	Sample(int n) :n(n) {}
////	//void disp()
////	//{
////	//	std::cout << n << std::endl;
////	//}
////	//void operator=(Sample&& other) noexcept {
////	//	std::cout << "move asign called\n";
////	//}
////	//Sample(Sample&& other) noexcept {
////	//	std::cout << "move cons.. called\n";
////	//}
////};
//
////class professor {
////public:
////	int* kaushik;
////	professor(int val) : kaushik(new int(val)) {
////		std::cout << "cons called\n";
////	}
////	professor(professor&& other) {
////		kaushik = other.kaushik;
////		//delete other.kaushik;
////		other.kaushik = nullptr;
////	}
////	~professor() {
////		if (kaushik) {
////			delete kaushik;
////		}
////		std::cout << "destructor called" << std::endl;
////	}
////};
//
//class epam {
//public:
//	std::string str;
//	epam(std::string val) : str(val) {
//		std::cout << "cons called\n";
//	}
//	epam(epam&& other) : str(std::move(other.str)) {
//	}
//	~epam() {
//		std::cout << "des called\n";
//	}
//};
//
//int main()
//{
//	//std::cout << 3 << std::endl;
//	//int b = 3;
//	//int a = std::move(b);
//	//std::cout << a << " " << b << std::endl;
//	//int* ptr = new int(2);
//	//int* ptr1 = std::move(ptr);
//	//std::cout << *ptr << std::endl;
//	//Sample s(1);
//	//Sample sam(2);
//	//sam = std::move(s);
//	//s.disp();
//	//sam.disp();
//	//float a = 10.333;
//	//int x = static_cast<int> (a);
//	//std::cout << x << std::endl;
//	//a = static_cast<float>(x);
//	//std::cout << a << std::endl;
//
//	//float ptr;
//	//std::cin >> ptr;
//	//int a = static_cast<int> (ptr);
//	//std::cout << a << std::endl;
//	//return 0;
//
//	//int n = 10;
//	//int pstd::move(n);
//	//std::cout << p << " " << &p << " " << n << " " << &n << std::endl;
//	/*Sample s(10);
//	Sample n = std::move(s);
//	Sample sumit(20);
//	n  s = std::move(sumit);*/
//
//	//int* ptr = new int(10);
//	//int* ptr2 = std::move(ptr);
//	//std::cout << &ptr << " " << &ptr2 << "\n";
//	/*Sample s(10);
//	Sample s2(std::move(s));
//	std::cout << &s.n << " " << &s2.n << std::endl;*/
//
//	/*professor p(10);
//	professor p2(std::move(p));
//	std::cout << p.kaushik << " " << p2.kaushik << std::endl;*/
//
//	epam e1("priyanshu");
//	epam e2(std::move(e1));
//
//	if (e1.str.empty()) {
//		std::cout << "e1's string is empty\n";
//	}
//	std::cout << e2.str << "\n";
//}