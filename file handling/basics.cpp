//#include<iostream>
//// https://www.geeksforgeeks.org/basics-file-handling-c/
////https://stackoverflow.com/questions/10469643/what-does-the-scanf-function-return
//
//int main()
//{
//	FILE* fptr = fopen("sample.txt", "w+");
//	if (fptr) std::cout << "file found" << std::endl;
//	else {
//		std::cout << "file not found or unable to open" << std::endl;
//		return 0;
//	}
//	fprintf(fptr, "hello world");
//	/*std::cout << fptr << std::endl;*/
//	fseek(fptr, -4, SEEK_CUR);
//	char ch;
//	while ((ch = fgetc(fptr)) != EOF) std::cout << ch;
//	std::cout << std::endl;
//	rewind(fptr);
//	char buffer[100];
//	while (fgets(buffer, 100, fptr));
//	std::cout << buffer << std::endl;
//	fclose(fptr);
//}

