#include <iostream>
using namespace std;

int main(){
    char no;
    cout << "Enter a number:";
    cin >> no;

    switch (no) {
        case 'S': break; case 's':
            cout << "You chose square";
        case 'R': break; case 'r':
            cout << "You chose rectangle";
        case 'C': break; case 'c':
            cout << "You chose circle";
        default: cout << "Invalid entry";
    }

    return 0;
}