# include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

int num;
int guess;
//We set the value of the variable named "tries" zero.
//Because if we do not assign a number (zero) it won't count it will generate a random number.
int tries = 0;
//We set a string variable named playagain to make it clear (even if we can use a char variable by naming it 'y').
string playagain = "Yes";
    //srand(time(NULL)); is a function used to initialize a random number generator so that each execution produces a different secret number.
    //We call this functions from the above library (<cstdlib> and <ctime>).
        srand(time(NULL));
    //We start by the outer loop.
    //This loop allows multiple rounds without restarting the program (if the user says "Yes").
        while (playagain == "Yes")
        {
    //The next funciton generates a random integer from 1 to 50 and stores it in the variable named "num".
                num = (rand() % 50) + 1;
                cout<< "NUMBER GUESSING GAME." << endl;
    //We use a second or inner loop.
    //We use this loop for the player to keep guess the secret number until the user finds the correct one.
                while (guess != num)
                {
                        cout<< "Enter a guess between (1-50): "; 
                 //The player will insert a number in the variable named guess.   
                        cin>> guess; 
                 //Each time it is guessed, the program adds one to the variable named "tries". 
                 //Used to keep count of how many attempts are made.    
                        tries++;
                //Then we proceed to the if condition in the inner loop.
                //We will compare the guess number to the secret number that the computer generated.
                if(guess > num){
                //It means the number is higher than the secret number.
                cout<< "Too high!"<< endl;
                }
                else if(guess < num){
                //It means the number is lower than the secret number.
                cout<< "Too low!"<< endl;
                }
                else{
                //It is the correct number.
                cout<< "CORRECT! Number of tries: " << tries << endl;
                }
                }
            //After we finish the inner loop. Play Again is displayed.
                cout << "Play Again (Yes/No): ";
            //If the player choose "Yes". The loop will start again with out terminating the program.
                cin >> playagain;
                cout << endl;
        }
            //Lastly, if the player chooses "No". The loop will end.
            //And it will print out "Thanks for playing.".
                cout << "Thanks for playing.";

        return 0;
}

