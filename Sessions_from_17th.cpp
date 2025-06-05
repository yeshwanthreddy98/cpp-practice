//class myClass
//{
//	int x;
//	char y;
//	double d;
//	int* ptr;
//
//public:
//
//	explicit myClass(int arg)
//		//myClass(int arg)
//	{
//		x = arg;
//		cout << "value of x" << x << endl;
//	}
//
//	//myClass(int arg, int x =10)
//	//{
//	//  x = arg;
//	//  ptr = new int(arg);
//	//  cout << "Inside constructor" << endl;
//	//}
//
//	//void printx()
//	//{
//	//  cout << x << endl;
//	//}
//  //public:
//  //  myClass()
//  //  {
//  //
//  //  }
//
//  //public:
//
//	~myClass()
//	{
//		cout << "Inside destructor" << endl;
//
//		if (ptr)
//			delete ptr;
//	}
//
//};
//
//class tempClass
//{
//	int s = 1;
//	int p, q;
//	const int abc = 20;
//public:
//	static int xtempClass;
//public:
//	tempClass()
//	{
//		cout << "Inside tempcalss constructor" << endl;
//	}
//
//
//	tempClass(const tempClass& obj)
//	{
//
//	}
//
//
//	static void memFunc()
//	{
//		xtempClass++;
//		cout << "Inside memFunc " << xtempClass << endl;
//	}
//
//	void NonConstMemFunc(int x, int y)
//	{
//		p = x;
//		q = y;
//
//		//this->p = x;
//		//this->q = y;
//		//this->xtempClass;
//		xtempClass++;
//		cout << "Inside NonStaticMemFunc " << p << " ; " << q << endl;
//	}
//
//	void ConstMemFunc(int x, int y) const
//	{
//		//p = x;
//		//q = y;
//		//this->p = x;
//		//this->q = y;
//		//this->xtempClass;
//		//xtempClass++;
//		cout << "Inside NonStaticMemFunc " << p << " ; " << q << endl;
//	}
//};
//
//void globalFunc(const tempClass param) // tempClass param = tempobj;
//{
//
//	param->
//}
//
//int tempClass::xtempClass = 10;
//
//
//class myBaseClass
//{
//public:
//	int x;
//	int x1;
//	tempClass tempClassObj;  //Composition and Aggregation
//private:
//	int y;
//	void privateBase()
//	{
//
//	}
//protected:
//	int z;
//public:
//	myBaseClass(int x)
//	{
//		cout << "Inside Base const" << endl;
//	}
//
//	myBaseClass(tempClass obj)
//	{
//		tempClassObj = obj;  // tempClassobj.operator=(obj)
//	}
//
//	myBaseClass(tempClass obj) :tempClassObj(obj)
//	{
//		//tempClassObj = obj;  // tempClassobj.operator=(obj)
//	}
//
//
//	//myBaseClass(int arg, int arg2) : x(arg), z1(arg2)
//	//{
//	//  cout << "Value of base x is" << x << endl;
//	//}
//	//myBaseClass(int arg):z1(arg)
//	//{
//	//  x = arg;
//	//  cout << "Value of base x is" << x << endl;
//	//}
//	//void baseFunc()
//	//{
//	//  cout << "Inside Base member function" << endl;
//	//}
//};
//
//
//class myDer : public myBaseClass
//{
//public:
//	myDer() :myBaseClass(10)
//	{
//		cout << "Inside Der const" << endl;
//	}
//
//};
//
//int main()
//{
//
//	const tempClass tempObj;
//	tempObj.NonConstMemFunc(1, 2);
//	tempObj.ConstMemFunc(1, 2);
//
//	globalFunc(tempObj);
//
//	tempClass::memFunc();
//	tempClass::NonStaticMemFunc();
//
//	tempClass tempObj2;
//	tempObj2.memFunc();
//
//
//	cout << tempClass::xtempClass << endl;
//
//	myBaseClass obj2(tempObj);
//	int x;
//	int& refVariable = x;
//	myBaseClass obj1;
//	myBaseClass obj1(10, 20);
//	obj1.baseFunc();
//	myDer obj2;
//	obj2.myDerMemFunc();
//
//	myClass obj1 = 1;
//	myClass obj2(1);
//	myClass obj1[10];
//
//	int x;
//	int* ptr = new int;
//
//	myClass obj[12];
//
//	myClass* objPtr = new myClass;
//
//	delete objPtr;
//	//obj1.printx();
//	//myClass obj2(20);
//	//myClass obj3(30);
//
//	myClass obj4;
//	obj4;
//
//
//	//{
//	//  int x = 20;
//	//}
//
//	//int y = 30;
//
//	myClass obj2(obj1);
//
//	//myClass obj3;
//
//	obj3 = obj2;
//
//	obj1++;
//
//
//	//======================================19th FEB========================================
//
//
//
//	//	======================================17th FEB========================================
//	struct department
//	{
//		char name[50];
//		int code;
//
//	};
//
//	struct student
//	{
//		char name[30];
//		int id;
//		department dep;
//	};
//
//
//	student std1{ "emp1", 1, {"CS",1234} };
//
//	printf("details of the employee are name: %s \t id: %d \t dep name : %s \t dep code %d \n \n",
//		std1.name, std1.id, std1.dep.name, std1.dep.code);
//
//	union myUnion {
//		int a;
//		char b;
//		//int x[30];
//	};
//
//
//	union myUnion data;
//
//	data.a = 10;
//	printf("Integer: %d\n", data.a);
//
//	data.b = 'c';
//	printf("char: %c\n", data.b);
//
//	data.a = 20;
//
//
//
//	printf("Int value  after using the union for char: %d\n", data.b);
//	printf("Int value  after using the union for char: %d\n", data.a);
//
//
//	//multiple of 4
//	struct student
//	{
//		char name;
//		int id;
//		double d;
//	};
//	//
//	printf("sizeof student is: %zu \n", sizeof(student));
//	//
//#pragma pack(1) //pow 2
//	struct student1
//	{
//		char name;
//		int id;
//		double d;
//	};
//	printf("sizeof student is: %zu \n", sizeof(student1));
//
//	int iVar = 25;
//	float fVar = 2.5;
//	double dVar = 3.6;
//
//	int* iPtr = &iVar;
//	float* fPtr = &fVar;
//	double* dPtr = &dVar;
//
//	printf("Values are : \n");
//	printf("%d, %f, %lf \n", iVar, fVar, dVar);
//
//	printf("Addresses are: \n");
//	printf("%p, %p, %p \n", &iVar, &fVar, &dVar);
//
//	printf("Values using pointers are : \n");
//	printf("%d, %f, %lf \n", *iPtr, *fPtr, *dPtr);
//
//	int a[3] = { 1, 2, 4 };
//
//
//	printf("%d \n", a[0]);
//	//printf("%d \n", a);
//	printf("%p \n", a);
//	int* p = a;
//	printf("%d \n", *p);
//
//	//++a;
//	++p;
//	printf("%d \n", *p);
//	--p;
//	printf("%d \n", *p);
//
//	int a[2][3] = { {1, 2, 3},{4, 5, 6} };
//
//	printf("%p \n", a);
//	//printf("%d \n", a[0][0]);
//	//printf("%d \n", *(*(a + 0) + 0));
//
//
//	printf("%p \n", a[0]);  // 100 (*(a+0)
//	//printf("%p \n", a[1]);  // 112
//
//	int* p = a[0]; //100
//	++p; // => &a[0][1]
//	//p += 3;
//
//	if (p == a[1])
//		printf("Yes");
//
//	//printf("%p \n", );  // 100 (*(a+0)
//	printf("%d \n", *p);  // 112
//	//printf("%p \n", *p);  // 112
//
//
//
//	printf("%p \n", a[1] - a[0]);  // 112
//
//	printf("%p \n", a[2]);  // 124
//
//
//
//	a[i][i] = *(*(a + i) + j);
//
//	a[0][0] = > *(a + 0) + 2
//
//		Mem Management in C
//		ptr = (cast - type*) malloc(byte - size) //100
//		ptr = (cast - type*)calloc(n, element - size);
//	free(ptr)
//		ptr = realloc(ptr, newSize); //200
//
//	int* ptr;
//	int* ptr2;
//
//	//un
//
//	//size_t
//
//	ptr = (int*)malloc(sizeof(int));
//	ptr2 = (int*)calloc(1, sizeof(int));
//
//	if (ptr && ptr2)
//		printf("%d \t %d \n", *ptr, *ptr2);
//
//	//auto ptr3 = realloc(ptr2, 20 * sizeof(int));
//	auto ptr3 = realloc(ptr2, pow(10, 12) * sizeof(int));
//
//	if (ptr3)
//		printf("Re-alloc pass");
//	else
//		printf("Re-alloc failed");
//
//	free(ptr);
//	free(ptr2);
//	free(ptr3);
//
//
//
//	======================================17th FEB========================================