// stream01.cpp
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	// create and open
	ofstream the_file("my_file.txt");

	// Write
	the_file << "O axtenistos tayros";

	// Close
	the_file.close();

	return 1;
}
