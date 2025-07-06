# Casino Number Guessing Game
Introduction

  This C++ program implements a simple casino‐style number guessing game. The computer seeds its random number generator using time(NULL), then picks a secret number between 1 and 50. The player repeatedly enters guesses until they find the correct number, receiving feedback on whether each guess is too high or too low. The program also tracks and displays the total number of attempts made.
  
  How It Works
  
- The program includes <cstdlib> and <ctime> (implicitly via <iostream>) to access rand(), srand(), and time().
  
- At startup, srand(time(NULL)); seeds the random number generator so that each execution produces a different secret number.
  
- num = (rand() % 50) + 1; generates a random integer from 1 to 50 and stores it in num.
  
- A do…while loop prompts the player to enter a guess, ensuring the loop runs at least once and continues until the correct number is guessed.
  
- Each time through the loop:
  
- The player’s input is read into guess.
  
- The attempt counter tries is incremented.
  
- If guess is greater than num, the program prints “Too high!”.
  
- If guess is less than num, it prints “Too low!”.
  
- If guess equals num, it prints “CORRECT!” along with the total tries.
  
- When the loop exits (i.e., guess == num), the program returns 0 and terminates.

 
References

- https://www.youtube.com/watch?v=hfnr2EPzn98&t=245s

- CodeSpeedy: Build a Number Guessing Game in C++
https://www.codespeedy.com/number-guessing-game-in-cpp/

- Stack Overflow: Simple Number Guessing Game in C++
https://stackoverflow.com/questions/24837559/simple-number-guessing-game-c


Group Members
1. Abraham Molla- RCD/0889/2017 
2. Beka Gizaw- RCD/1612/2017  
3. Kalab Belay- RCD/0921/2017 
4. Betselot Getnet- RCD/0901/2017 
5. Fikremariam Getaneh- RCD/0908/2017 
6. Fraol Yadete- RCD/1071/2016 
7. Paulos Simeon- RCD/1702/2017

