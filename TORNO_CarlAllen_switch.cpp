#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //Declaring variable
    float numOne, numTwo, result;
    char op;

    cout << "+====================================+" << endl;
    cout << "|             CALCULATOR             |" << endl;
    cout << "+====================================+" << endl;

    //Getting User Input
    cout << "\n Enter two numbers: ";
    cin >> numOne >> numTwo;

    cout << "\n Enter the operator(+, -, *, /) : ";
    cin >> op;


    cout << fixed << setprecision(0);

    //Casing the operator
    switch(op){
        case '+':
            result = numOne + numTwo;
            cout << "\n The result of the operation is : " << result;
            break;

        case '-':
            result = numOne - numTwo;
            cout << "\n The result of the operation is : " << result;
            break;

        case '*':
            result = numOne * numTwo;
            cout << "\n The result of the operation is : " << result;
            break;

        case '/':
            result = numOne / numTwo;
            cout << "\n The result of the operation is : " << result;
            break;

        default:
            cout << "\n Invalid operator!!";
    }
    cout << "\n\n+====================================+" << endl;
    return 0;
}
