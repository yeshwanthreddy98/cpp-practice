//#include <iostream>
//#include <string>
//#include <vector>
//
//class Person {
//private:
//	std::string name;
//	int age;
//	std::vector<std::string> hobbies;
//	const std::string nationalID;
//
//public:
//	Person(const std::string& name, int age, const std::string& id)
//		: name(name), age(0), nationalID(id) {
//		setAge(age);
//	}
//
//	void setName(const std::string& newName) {
//		if (!newName.empty()) {
//			name = newName;
//		}
//	}
//
//	std::string getName() const {
//		return name;
//	}
//
//	void setAge(int newAge) {
//		if (newAge > 0 && newAge < 130) {
//			age = newAge;
//		}
//	}
//
//	int getAge() const {
//		return age;
//	}
//
//	void addHobby(const std::string& hobby) {
//		if (!hobby.empty()) {
//			hobbies.push_back(hobby);
//		}
//	}
//
//	std::vector<std::string> getHobbies() const {
//		return hobbies;
//	}
//
//	std::string getNationalID() const {
//		return nationalID;
//	}
//
//	void printInfo() const {
//		std::cout << "Name: " << name << std::endl;
//		std::cout << "Age: " << age << std::endl;
//		std::cout << "National ID: " << nationalID << std::endl;
//		std::cout << "Hobbies:";
//		for (const auto& h : hobbies) {
//			std::cout << " " << h;
//		}
//		std::cout << std::endl;
//	}
//};
//
//int main() {
//	Person p("Alice Johnson", 25, "AA123456Z");
//	p.addHobby("Reading");
//	p.addHobby("Cycling");
//	p.setAge(34);
//	p.setName("Alice J.");
//	p.addHobby("Programming");
//
//	p.printInfo();
//
//	p.setAge(-5);
//	p.setName("");
//	p.addHobby("");
//
//	std::cout << "\nAfter invalid modifications attempt:" << std::endl;
//	p.printInfo();
//
//
//	std::cout << "National ID is: " << p.getNationalID() << std::endl;
//
//	return 0;
//}