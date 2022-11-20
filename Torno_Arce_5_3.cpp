#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    //variables
    string name; // for the users name
    float mSales, income;

    cout << "Enter name          : ";
    getline(cin, name);

    cout << "Enter monthly Sales : ";
    cin >> mSales;
    cout << "\n";

    if (mSales >= 50000){
        income = 575 + (0.16 * mSales);

    } else if (mSales < 50000 && mSales >= 40000){
        income = 550 + (0.14 * mSales);

    } else if (mSales < 40000 && mSales >= 30000){
        income = 525 + (0.12 * mSales);

    } else if (mSales < 30000 && mSales >= 20000){
        income = 500 + (0.09 * mSales);

    } else if (mSales < 20000 && mSales >= 10000){
        income = 450 + (0.05 * mSales);

    } else if (mSales < 10000) {
        income = 400 + (0.03 * mSales);
    }

    cout << fixed << setprecision(2); // to set the output into two decimal places

    //some color properties which is called ansi XXm represents foreground color

    if (mSales == 0){
        cout << "\x1b[33m" << name << "'s income is $" << income << "\x1b  \n"; //yellow like moderate
    } else if (income > 0) {
        cout << "\x1b[32m" << name << "'s income is $" << income << "\x1b  \n"; //green for Gross or Win
    } else {
        cout << "\x1b[31m" << name << "'s income is $" << income << "\x1b  \n"; //red for Net or Loss
    }

    return 0;
}