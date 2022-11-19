// encapsulation01a.cpp
//

#include <iostream>

using namespace std;

class PR {
private:
    short int a;
    short int b;
public:
    PR(short int input1, short int input2) :a(input1), b(input2){};
    int sum() { return a + b; }
};

int main()
{
    PR pc(3, 4);
    cout << pc.sum() << endl;

    return 0;
}
