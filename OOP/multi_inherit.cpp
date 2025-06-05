//#include <iostream>
//using namespace std;
//
//struct B1a {
//	B1a() { cout << "B1a constructor\n"; }
//	~B1a() { cout << "B1a destructor\n"; }
//};
//
//struct B1b {
//	B1b() { cout << "B1b constructor\n"; }
//	~B1b() { cout << "B1b destructor\n"; }
//};
//
//struct B2a {
//	B2a() { cout << "B2a constructor\n"; }
//	~B2a() { cout << "B2a destructor\n"; }
//};
//
//struct B2b {
//	B2b() { cout << "B2b constructor\n"; }
//	~B2b() { cout << "B2b destructor\n"; }
//};
//
//struct B1 : public B1a, public B1b {
//	B1() { cout << "B1 constructor\n"; }
//	~B1() { cout << "B1 destructor\n"; }
//};
//
//struct B2 : public B2a, public B2b {
//	B2() { cout << "B2 constructor\n"; }
//	~B2() { cout << "B2 destructor\n"; }
//};
//
//struct D : public B2, public B1 {
//	D() { cout << "D constructor\n"; }
//	~D() { cout << "D destructor\n"; }
//};
//
//int main() {
//	cout << "Constructing D:\n";
//	D d;
//	cout << "Destruction will begin.\n";
//	return 0;
//}