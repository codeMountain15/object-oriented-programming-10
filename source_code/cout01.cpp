// cout01.cpp
//

#include <iostream>

using namespace std;

int main()
{
    double pi = 3.14159783;

    // print the first n characters from the string
    cout.write("One month until Christmas!!", 9);

    // Print pi
    cout << endl << pi << endl;

    // define precision and print again
    cout.precision(9);
    cout << pi << endl;

    return 0;
}
