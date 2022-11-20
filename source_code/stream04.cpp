// stream04.cpp
// a combined paradigm

#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main() {

    bool exit = false;
    int menu_option;
    string temp;
    ofstream fl;
    ifstream ff;

    while (!exit){
        cout << "Press 1 to create and add content to a new file\n" 
            << "Press 2 to append content to file\n" 
            << "Press 3 to read the contents from a file\n"
            << "Press 0 to exit\n";
    
        cin >> menu_option;

        // choose what to do with users' input
        switch (menu_option)
        {
            case 1:
                cout << "Give the file name\n";
                cin >> temp;
                fl.open(temp);

                cout << "Give the content to insert\n";
                cin >> temp;
                fl << temp;

                fl.close();
                break;
            case 2:
                cout << "Give the file name\n";
                cin >> temp;
                fl.open(temp, ios::app);

                cout << "Give the content to insert\n";
                cin >> temp;
                fl << endl << temp;

                fl.close();
                break;
            case 3:
                cout << "Give the file name\n";
                cin >> temp;
                ff.open(temp);

                while (ff >> temp) {
                    cout << temp << endl;
                }

                ff.close();
                break;
            case 0:
                exit = true;
                break;
            default:
                cout << "Not valid input\n";
        }
    }

	return 0;
}
