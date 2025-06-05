//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <stdexcept>
//
//struct student
//{
//	char name[100];
//	int age;
//};
//
//int main()
//{
//	FILE* fptr = fopen("student_db.txt", "a+"); // Open for read/write in binary mode
//	try
//	{
//		if (fptr == NULL) throw std::runtime_error("file not found");
//	}
//	catch (const std::exception& ex)
//	{
//		std::cout << "runtime error occured: " << ex.what() << std::endl;
//		return 0;
//	}
//
//	student virat;
//	strcpy(virat.name, "virat");
//	virat.age = 20;
//
//	fwrite(&virat, sizeof(student), 1, fptr);
//
//	// Move file pointer to beginning before reading
//	fseek(fptr, -static_cast<long>(sizeof(student)), SEEK_END);
//
//	student temp;
//	fread(&temp, sizeof(student), 1, fptr);
//	std::cout << temp.name << " " << temp.age << std::endl;
//
//	fclose(fptr);
//	return 0;
//}