// encapsulation01b_updated.cpp
//

#include <iostream>

using namespace std;

class PR {

public:
    unsigned short int a;
    unsigned short int b;

    PR(short int input1, short int input2) :a(input1), b(input2){};
    int sum() { return a + b; }
};

int main()
{
    PR pc(-3, 4);
    cout << pc.a + pc.b << endl;

    return 0;
}