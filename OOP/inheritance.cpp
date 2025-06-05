//#include <iostream>
//#include <cstring>
//
//class Person {
//protected:
//	char* name;
//public:
//	Person(const char* pname) {
//		name = new char[strlen(pname) + 1];
//		strcpy(name, pname);
//		std::cout << "Person constructed: " << name << std::endl;
//	}
//
//
//	virtual ~Person() {
//		std::cout << "Person destroyed: " << name << std::endl;
//		delete[] name;
//	}
//
//	virtual void introduce() const {
//		std::cout << "Hi, I'm " << name << "." << std::endl;
//	}
//};
//
//class Student : public Person {
//private:
//	char* subject;
//public:
//	Student(const char* pname, const char* psubject)
//		: Person(pname)
//	{
//		subject = new char[strlen(psubject) + 1];
//		strcpy(subject, psubject);
//		std::cout << "Student constructed: " << subject << std::endl;
//	}
//
//	~Student() {
//		std::cout << "Student destroyed: " << subject << std::endl;
//		delete[] subject;
//	}
//
//	void introduce() const override {
//		std::cout << "Hi, I'm " << name << " and I study " << subject << "." << std::endl;
//	}
//};
//
//int main() {
//	Person* p = new Person("Alice");
//	p->introduce();
//
//	std::cout << std::endl;
//
//	Person* s = new Student("Bob", "Physics");
//	s->introduce();
//
//	std::cout << "\nDeleting person:" << std::endl;
//	delete p;
//
//	std::cout << "Deleting student:" << std::endl;
//	delete s;
//
//	return 0;
//}