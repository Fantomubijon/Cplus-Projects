/*
 *   This program is set to determine the equivalent horoscope of a date
 *   where it will ask for a numerical value of the day and month
 *
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    // variables
    float month = 0;
    int day = 0, endMonth = 0;
    string monthName, horoscope;
    bool pass; // it is the determiner if the month has a decimal value

    // for reference
    cout << "+-------------------------------+\n";
    cout << "| AQUARIUS    | JAN 20 - FEB 18 |\n";
    cout << "| PISCES      | FEB 19 - MAR 20 |\n";
    cout << "| ARIES       | MAR 21 - APR 19 |\n";
    cout << "| TAURUS      | APR 20 - MAY 20 |\n";
    cout << "| GEMINI      | MAY 21 - JUN 20 |\n";
    cout << "| CANCER      | JUN 21 - JUL 22 |\n";
    cout << "| LEO         | JUL 23 - AUG 22 |\n";
    cout << "| VIRGO       | AUG 23 - SEP 22 |\n";
    cout << "| LIBRA       | SEP 23 - OCT 22 |\n";
    cout << "| SCORPIO     | OCT 23 - NOV 21 |\n";
    cout << "| SAGITTARIUS | NOV 22 - DEC 21 |\n";
    cout << "| CAPRICORN   | DEC 22 - JAN 19 |\n";
    cout << "+-------------------------------+\n";

    // Getting the value of the month
    cout << "\nEnter month: ";
    cin >> month;

    /*
     *   It will not accept a month with a decimal value
     *   only accepts number 1 to 12 which represents the 12 months in
     *   the calendar or else it will display an error message and will terminate
     *   the program
     *
     */

    // will check if the month is valid
    if (fmod(month,12) == 0) {
        monthName = "December";
        endMonth = 31;
        pass = false;
    }
    else if (fmod(month,11) == 0) {
        monthName = "November";
        endMonth = 30;
        pass = false;
    }

    else if (fmod(month,10) == 0) {
        monthName = "October";
        endMonth = 31;
        pass = false;
    }

    else if (fmod(month,9) == 0) {
        monthName = "September";
        endMonth = 30;
        pass = false;
    }

    else if (fmod(month,8) == 0) {
        monthName = "August";
        endMonth = 31;
        pass = false;
    }

    else if (fmod(month,7) == 0) {
        monthName = "July";
        endMonth = 31;
        pass = false;
    }
    else if (fmod(month,6) == 0) {
        monthName = "June";
        endMonth = 30;
        pass = false;
    }
    else if (fmod(month,5) == 0) {
        monthName = "May";
        endMonth = 31;
        pass = false;
    }
    else if (fmod(month,4) == 0) {
        monthName = "April";
        endMonth = 30;
        pass = false;
    }

    else if (fmod(month,3) == 0) {
        monthName = "March";
        endMonth = 31;
        pass = false;
    }

    else if (fmod(month,2) == 0) {
        monthName = "February";
        endMonth = 29;
        pass = false;
    }
    else if (fmod(month,1) == 0) {
        monthName = "January";
        endMonth = 31;
        pass = false;

    }
    else{
        pass = true;
    }

    if (pass){
        cout << "[INVALID] Decimal is not allowed! ";
    } else {
        if (month > 12 || month < 1) {
            //cout << "Invalid month";
            cout << "[INVALID] Month does not exist! ";

        } else {
            //for day
            cout << "Enter day: ";
            cin >> day;

            /*
             *   If the day does not exist in the month it will also appear an error
             *   message and will terminate the program
             */

            if (day > endMonth || day < 1) {
                //cout << "Invalid day of the month value";
                cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;

            }else {

                // horoscope
                if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
                    horoscope = "Aquarius";
                }

                else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
                    horoscope = "Pisces";
                }

                else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
                    horoscope = "Aries";
                }

                else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
                    horoscope = "Taurus";
                }

                else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
                    horoscope = "Gemini";
                }

                else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
                    horoscope = "Cancer";
                }

                else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
                    horoscope = "Leo";
                }

                else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
                    horoscope = "Virgo";
                }

                else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
                    horoscope = "Libra";
                }

                else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
                    horoscope = "Scorpio";
                }

                else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
                    horoscope = "Sagittarius";
                }

                else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
                    horoscope = "Capricorn";
                }

                cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;
            }
        }
    }
    return 0;
}