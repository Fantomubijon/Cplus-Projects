#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    // Providing a seed value
    srand((unsigned) time(NULL));

    // Loop to get 5 random numbers
    for(int i=1; i<=5; i++){

        // Retrieve a random number between 10 to 99 for 2 digit number generation
        int random = 10 + (rand() % 89);

        // Print the random number
        cout<<random<<endl;
    }

    return 0;
}