#include<iostream>

class Complex
{
public:
	float real, imag;

	explicit Complex(float r = 0.0, float i = 0.0) : real(r), imag(i)
	{
		/*std::cout << "constructor initialization list" << std::endl;*/
	}

	bool operator==(const Complex& com)
	{
		return (real == com.real && imag == com.imag);
	}
};

//int main()
//{
//	Complex obj(3.0, 0.0);
//	// here 3.0 is implicitly considered as complex object with other argument as 0.0
//		// to avoid this we use explicit to the constructor
//		// compiler is only allowed to make 1 implicit conversion
//	/*if (obj == 3.0) std::cout << "same" << std::endl;*/
//	if (obj == Complex(3.0)) std::cout << "same" << std::endl;
//	else std::cout << "not same" << std::endl;
//}


// https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean

//Note: The explicit specifier can be used with a constant expression.However, if that constant expression evaluates to true, then only the function is explicit.