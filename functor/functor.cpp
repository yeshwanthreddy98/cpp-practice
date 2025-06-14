//#include <iostream>
//
class Multiply {
private:
	int factor;
public:
	Multiply(int f) : factor(f) {}

	// Overload the function call operator
	int operator()(int x) const {
		return x * factor;
	}
};
//
//int main() {
//	Multiply multiplyBy3(3);
//	std::cout << multiplyBy3(5) << std::endl; // Output: 15
//
//	// Can also create temporary objects
//	std::cout << Multiply(4)(6) << std::endl; // Output: 24
//	//std::cout << Multiply(3)(10) << std::endl;
//	return 0;
//}



//---------------- stateful functors ---------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//class Counter {
//private:
//	mutable int count = 0; // mutable allows modification in const methods
//public:
//	bool operator()(int value) const {
//		count++;
//		return value > 0;
//	}
//
//	int getCount() const { return count; }
//};
//
//int main() {
//	std::vector<int> numbers = { -1, 2, -3, 4, 5, -6 };
//	Counter counter;
//
//	// Count positive numbers
//	std::count_if(numbers.begin(), numbers.end(), counter);
//	std::cout << "Function was called " << counter.getCount() << " times" << std::endl;
//	return 0;
//}