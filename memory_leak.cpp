#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool detectMemoryLeaks(const string& filename) {
	ifstream file(filename);

	// Check if the file was opened successfully
	if (!file.is_open()) {
		cerr << "Error opening file!" << endl;
		return false;
	}

	string line;
	int newCount = 0;  // Counter for 'new' and 'delete'

	// Read the file line by line
	while (getline(file, line)) {
		// Check if the line contains "new"
		if (line.find("new") != string::npos) {
			newCount++;  // Increment counter when 'new' is found
		}

		// Check if the line contains "delete"
		if (line.find("delete") != string::npos) {
			newCount--;  // Decrement counter when 'delete' is found
		}
	}

	file.close();  // Close the file

	// If the counter is greater than 0, there are memory leaks
	if (newCount > 0) {
		return true;
	}

	return false;  // No memory leaks
}

//int main() {
//	string filename;
//	cout << "Enter the path to the C++ source file: ";
//	cin >> filename;
//
//	if (detectMemoryLeaks(filename)) {
//		cout << "Memory leak detected!" << endl;
//	}
//	else {
//		cout << "No memory leaks detected." << endl;
//	}
//
//	return 0;
//}
