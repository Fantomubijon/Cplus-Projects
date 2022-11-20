#include <iostream>
#include <stdlib.h>
using namespace std;

int difficultyLevel(int l){
    if(l == 1){
        return l = 5;
    } else if(l == 2){
        return l = 10;
    } else if(l == 3){
        return  l = 15;
    }
}

int main(){
    srand((unsigned) time(NULL));

    int opChoice, answer, score, add1, add2, level;
    string opName, some;
    int ctr = 0;


    cout << " ========================================== " << endl;
    cout << "        CHOOSE WHAT TYPE OF OPERATION       " << endl;
    cout << "               [1] ADDITION                 " << endl;
    cout << "               [2] SUBTRACTION              " << endl;
    cout << "               [3] MULTIPLICATION           " << endl;
    cout << "               [4] DIVISION                 " << endl;

    cout << "    ENTER THE NUMBER FOR THE OPERATION: ";
    cin >> opChoice;

    cout << " \n\n" << endl;

    cout << " ========================================== " << endl;
    cout << "       CHOOSE WHAT LEVEL OF DIFFICULTY      " << endl;
    cout << "               [1] BASIC                    " << endl;
    cout << "               [2] INTERMEDIATE             " << endl;
    cout << "               [3] HARD                     " << endl;

    cout << "    ENTER THE NUMBER FOR THE DIFFICULTY: ";
    cin >> level;

    level = difficultyLevel(level);

    switch (opChoice) {
        case 1:
            opName = "ADDITION";
            cout << "Generating " << opName << "Questions....." << endl;

            for(int i=1; i<= level; i++) {

                // Retrieve a random number between 10 to 99 for 2 digit number generation
                add1 = 10 + (rand() % 89);
                add2 = 10 + (rand() % 89);
                int correctSum = add1 + add2;
                // Print the random number
                cout << add1 << " + " << add2 << " = ";
                cin >> answer;
                ctr += 1;


                if (answer == correctSum) {
                    //cout << "Your answer is Correct proceed to the next press Y: ";
                    //cin >> some;
                    score += 1;

                } else {
                    //cout << "Your answer is Wrong but please proceed to the next press Y: ";
                    //cin >> some;
                }

                cout << "\n";
            }
            break;

        case 2:
            opName = "Subtraction";
            cout << "Generating " << opName << "Questions....." << endl;

            for(int i=1; i<=5; i++) {

                // Retrieve a random number between 10 to 99 for 2 digit number generation
                add1 = 10 + (rand() % 89);
                add2 = 10 + (rand() % 89);
                int correctSum = add1 - add2;
                // Print the random number
                cout << add1 << " - " << add2 << " = ";
                cin >> answer;
                ctr += 1;
                if (answer == correctSum) {
                    cout << "Your answer is Correct proceed to the next press Y: ";
                    cin >> some;
                    score += 1;

                } else {
                    cout << "Your answer is Wrong but please proceed to the next press Y: ";
                    cin >> some;
                }

                cout << "\n";
            }
            break;

    }

    cout << "OUT OF " << ctr << " you only got " << score;

    //cout << "Okay na";
    return 0;
}