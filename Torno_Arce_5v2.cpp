#include <iostream>
using namespace std;

int main() {

    // variables
    int day = 0, month = 0;
    string monthName, horoscope;

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

    cout << "\nEnter month: ";
    cin >> month;

    if (month > 12 || month < 1){
        cout << "[INVALID] Month does not exist! ";

    } else {
        cout << "Enter day: ";
        cin >> day;

        switch (month){
            case 1:
                monthName = "January";
                if (day >= 1 && day <= 19) {
                    horoscope = "Capricorn";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 20 && day <= 31){
                    horoscope = "Aquarius";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 2:
                monthName = "February";
                if (day >= 1 && day <= 18) {
                    horoscope = "Aquarius";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 19 && day <= 29){
                    horoscope = "Pisces";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 3:
                monthName = "March";
                if (day >= 1 && day <= 20) {
                    horoscope = "Pisces";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 21 && day <= 31){
                    horoscope = "Aries";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 4:
                monthName = "April";
                if (day >= 1 && day <= 19) {
                    horoscope = "Aries";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 20 && day <= 30){
                    horoscope = "Taurus";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 5:
                monthName = "May";
                if (day >= 1 && day <= 20) {
                    horoscope = "Capricorn";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 21 && day <= 31){
                    horoscope = "Gemini";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 6:
                monthName = "June";
                if (day >= 1 && day <= 20) {
                    horoscope = "Gemini";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 21 && day <= 30){
                    horoscope = "Cancer";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 7:
                monthName = "July";
                if (day >= 1 && day <= 22) {
                    horoscope = "Cancer";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 23 && day <= 31){
                    horoscope = "Leo";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 8:
                monthName = "August";
                if (day >= 1 && day <= 22) {
                    horoscope = "Leo";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 23 && day <= 31){
                    horoscope = "Virgo";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 9:
                monthName = "September";
                if (day >= 1 && day <= 22) {
                    horoscope = "Virgo";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 23 && day <= 30){
                    horoscope = "Libra";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 10:
                monthName = "October";
                if (day >= 1 && day <= 22) {
                    horoscope = "Libra";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 23 && day <= 31){
                    horoscope = "Scorpio";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 11:
                monthName = "November";
                if (day >= 1 && day <= 21) {
                    horoscope = "Scorpio";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 22 && day <= 30){
                    horoscope = "Sagittarius";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

            case 12:
                monthName = "December";
                if (day >= 1 && day <= 21) {
                    horoscope = "Sagittarius";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                }else if (day >= 22 && day <= 31){
                    horoscope = "Capricorn";
                    cout << "Zodiac sign for " << monthName << " " << day << " is " << horoscope;

                } else {
                    cout << "[INVALID] Day " << day << " does not exist in the month of " << monthName << "!" << endl;
                }
                break;

        }
    }
    return 0;
}