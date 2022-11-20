#include <iostream>
#include <math.h>
using namespace std;

int main() {

    //Declaring variable
    float examOne, examTwo, examThree, average;

    cout << "+==========================+" << endl;
    cout << "|       AVERAGE GRADE      |" << endl;
    cout << "+==========================+" << endl;

    //Getting User Input
    cout << "\n ENTER EXAM NO.1: ";
    cin >> examOne;

    cout << "\n ENTER EXAM NO.2: ";
    cin >> examTwo;

    cout << "\n ENTER EXAM NO.3: ";
    cin >> examThree;

    //Solving the average of the grade
    average = (examOne + examTwo + examThree) / 3;

    //Includes Smiley face hehe
    cout << "\n============================";
    if (average >= 70) {
        cout << "\n AVERAGE GRADE: " << trunc(average) << " :)";
    } else {
        cout << "\n AVERAGE GRADE: " << trunc(average) << " :(";
    }
    cout << "\n============================" << endl;

    return 0;
}
