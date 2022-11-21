// operator_ovrl_gl.cpp
// overload + operator
// as a global/friend function

#include <iostream>

using namespace std;

class Tiny_Class
{
public:
    int id;
    Tiny_Class(int ipt = 0) { id = ipt; } // constructor
    //int get_id() { return id; }

    friend Tiny_Class& operator+ (const Tiny_Class&, const Tiny_Class&);
};


Tiny_Class& operator+ (const Tiny_Class& obj1, const Tiny_Class& obj2) {
    Tiny_Class result_object (obj1.id + obj2.id);

    return result_object;
}


int main()
{
    Tiny_Class a1(5), a2(6), a3;

    a3 = a1+a2;
    cout << a3.id;

    return 0;
}
