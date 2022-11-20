// error_handling06a.cpp
// define a new exception
// class version

#include <iostream>
#include <exception>

using namespace std;

// build my exeption
class koukouroukou : public exception {
public:
    const char* what() const throw ()
    {
        return "Someone pushed the wrong button...\n";
    }
};

int main() {

    try {
        // ...
        throw koukouroukou();
    }
    catch (koukouroukou& expt) {
        cout << expt.what() << endl;
    }

    return 0;
}
