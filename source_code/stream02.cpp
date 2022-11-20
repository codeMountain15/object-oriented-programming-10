// stream02.cpp
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// temporary string
	string text_line;

	// Read from the text file
	ifstream read_file("my_file.txt");

	// read the file line-by-line
	// with getline() function
	while (getline(read_file, text_line)) {
		cout << text_line << endl;
	}

	// Close the file
	read_file.close();

	return 0;
}
