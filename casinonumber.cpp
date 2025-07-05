# include <iostream>
using namespace std;

int main() {

int num = 0;
int guess = 0;
int tries = 0;

    srand(time(NULL));
    num = (rand() % 50) + 1;

    cout<< "NUMBER GUESSING GAME \n";

    do{
        cout<< "Enter a guess between (1-50): ";
        cin>> guess;
        tries++;

    if(guess > num){
            cout<< "Too high!\n";
        }
    else if(guess < num){
            cout<< "Too low!\n";
        }
    else{
            cout<< "CORRECT! Number of tries: " << tries << '\n';
        }

    }while(guess != num);

    return 0;
}