// encapsulation01b_updated.cpp
//

#include <iostream>

using namespace std;

class PR {
private:
    const int pass_limit = 6; // the limit has changed!
public:
    int grade;
    PR(int input1) : grade(input1) {};
    bool passed() {
        return (grade >= pass_limit) ? true : false;
    }
};

int main()
{
    bool result;
    PR pc(5);

    result = (pc.grade >= 5) ? true : false;
    cout << result << endl;

    return 0;
}
