#include <iostream>
#include <iomanip>
using namespace std;

void line() {
    cout <<"\n******************************************************\n";
}

float Solve_for_Cube(float c){
    float VOLUME;
    VOLUME = c * c * c;
    return VOLUME;
}

float Solve_for_Sphere(float s){
    float VOLUME;
    VOLUME = (s - 32) * 5/9;
    return VOLUME;
}

float Celsius_to_Kelvin(float c){
    float con;
    con = c + 273.15 ;
    return con;
}

int main() {
    // variable declaration
    int op;
    char tryAgain;
    float fahrenheit, celsius, kelvin;

    do{
        // system output
        line();
        cout << "\t\t\t\tTEMPERATURE CONVERTER";
        line();

        cout << "             [1] - Celsius to Fahrenheit" << endl;
        cout << "             [2] - Fahrenheit to Celsius" << endl;
        cout << "             [3] - Celsius to Kelvin";
        line();

        cout << "Choose your option: ";
        cin >> op;
        cout << fixed << setprecision(2);

        switch (op) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                fahrenheit = Celsius_to_Fahrenheit(celsius);
                cout << celsius << " degree Celsius is " << fahrenheit << " degree Fahrenheit." << endl;
                break;

            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> fahrenheit;
                celsius = Fahrenheit_to_Celsius(fahrenheit);
                cout << fahrenheit << " degree Fahrenheit is " << celsius << " degree Celsius." << endl;
                break;

            case 3:
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                kelvin = Celsius_to_Kelvin(celsius);
                cout << celsius << " degree Celsius is " << kelvin << " degree Kelvin." << endl;
                break;

            default:
                cout << "[INVALID] Option not found" << endl;
                break;
        }

        cout << "Do you want to continue[Y/N]? ";
        cin >> tryAgain;

    } while(tryAgain == 'Y' || tryAgain == 'y');

    return 0;
}