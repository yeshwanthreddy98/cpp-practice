#include <iostream>

// A template class with a dependent type
template <typename T>
class Container {
public:
	using value_type = T;  // A dependent type, depends on T
};

// A template function that takes a Container type as a parameter
template <typename T>
void printValue() {
	typename T::value_type value = 42;  // 'typename' is required here to indicate 'value_type' is a type
	std::cout << value << std::endl;
}

//int main() {
//	// Using 'Container<int>' where 'T' is 'int', so value_type is 'int'
//	printValue<Container<int>>();  // Output: 42
//
//}