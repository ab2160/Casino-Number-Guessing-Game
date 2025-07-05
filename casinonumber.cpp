# include <iostream>
using namespace std;

int main() {

int num;
int guess;
//We set the value of the variable named "tries" zero.
//Because if we do not assign a number (zero) it won't count it will generate a random number.
int tries = 0;

    //sran(time(NULL)); is a function used to initialize a random number generator so that each execution produces a different secret number.
    srand(time(NULL));
    //The next funciton generates a random integer from 1 to 50 and stores it in the variable named "num".
    num = (rand() % 50) + 1;

    cout<< "NUMBER GUESSING GAME \n";

    //We use a do...while loop for the player to enter a guess, so that the loop will run atleast once and continues until it is guessed correctly. 
    do{
        cout<< "Enter a guess between (1-50): ";
        //The players loop is read into guess.
        cin>> guess;
        //Each time it is guessed, the program adds one to the variable named "tries". 
        //Used to keep count of how many attempts are made.
        tries++;
    //Then we proceed to the if loop with in the do...while loop.
    //Used to compare the guessed number against the secret number.    
    if(guess > num){
            cout<< "Too high!"<< endl;
        }
    else if(guess < num){
            cout<< "Too low!"<< endl;
        }
    else{
            cout<< "CORRECT! Number of tries: " << tries << endl;
        }
    
    }while(guess != num);

    return 0;
}
