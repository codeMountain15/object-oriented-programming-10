// stream01b.cpp
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	// create and open a new file
	ofstream the_file;
	the_file.open("my_file.txt");

	// Write to the file
	the_file << "I pardali agelada";

	// Close
	the_file.close();

	return 0;
}
