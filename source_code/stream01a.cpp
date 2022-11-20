// stream01a.cpp
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// show me the folder
	system("dir");

	// createand & open a new txt file
	ofstream the_file("my_file.txt");

	// Write
	the_file << "O axtenistos tayros";

	// Close
	the_file.close();

	// show me the folder again
	system("dir");

	return 1;
}
