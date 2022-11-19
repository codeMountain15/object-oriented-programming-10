// encapsulation01b.cpp
//

#include <iostream>

using namespace std;

class PR {
private:
    int grade;
    const int pass_limit = 5;
public:
    PR(int input1) : grade(input1) {};
    bool passed() { 
        return (grade >= pass_limit) ? true : false;
    }
};

int main()
{
    bool result;
    PR pc(5);
    
    result =  (grade >= 5) ? true : false;
    cout << result << endl;

    return 0;
}
