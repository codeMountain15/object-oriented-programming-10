// stream01c.cpp
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream the_file("my_file.txt");
  
    if (the_file.is_open())
    {
        the_file << "San pas ston pigaimo gia tin Ithaki\n";
        the_file << "Na efxesai na erhei sintoma to metro\n";

        the_file.close();
    }
    else cout << "Cannot open the file";

	return 0;
}
