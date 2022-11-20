// stream03.cpp
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // append
    ofstream the_file("my_file.txt", ios::app);
    if (the_file.is_open())
    {
        the_file << "Mia xoriatiki salata sto #5\n";
        the_file.close();
    }
    else cout << "Cannot open the file";

	return 0;
}
