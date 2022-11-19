// encapsulation01a_updated.cpp
//

#include <iostream>

using namespace std;

class PR {
private:
    int grade;
    const int pass_limit = 6; // the limit has changed!
public:
    PR(int input1) : grade(input1) {};
    bool passed() {
        return (grade >= pass_limit) ? true : false;
    }
};

int main()
{
    PR pc(5);
    cout << pc.passed() << endl;

    return 0;
}
