//#include<iostream>
//#include<vector>
//
//class Sample
//{
//public:
//	int n;
//	int& val;
//	std::string str;
//	enum constype { param3, param1 };
//	constype type;
//	Sample(const int& n, int& val, const std::string& str) :val(val), n(n)
//	{
//		type = param3;
//		std::cout << "inside 3 paramoverloaded constructor" << std::endl;
//		this->str = str;
//		//std::cout << "inside constructor" << std::endl;
//		//func();
//	}
//	Sample(int& val) :val(val), n(0), str("constructed with param1")
//	{
//		//n = 0;
//		//str = "constructed with param1";
//		type = param1;
//		std::cout << "inside constructor" << std::endl;
//	}
//
//	Sample(const Sample& other) : val(other.val)
//	{
//		std::cout << "copy constructor called" << std::endl;
//	}
//
//	void func()
//	{
//		std::cout << "inside member function" << std::endl;
//		/*Sample();*/
//	}
//
//	~Sample()
//	{
//		if (type == param3) std::cout << "destroying 3 param obj" << std::endl;
//		if (type == param1) std::cout << "destroying 1 param obj" << std::endl;
//	}
//
//};
//
//int main()
//{
//	int val = 10;
//	//Sample s(val);
//	//Sample sam(5, val, "hellow");
//	/*Sample arr[4]*/;
//	//std::cout << sizeof(Sample) << std::endl;
//	//std::cout << sizeof(s) << std::endl;
//	Sample arr[]{ Sample(val),Sample(5,val,"hellow") };
//
//	//std::vector<Sample> arr(3, Sample(val));
//
//	/*std::cout << s.n << " " << s.str << " " << s.val << std::endl;*/
//	return 0;
//}