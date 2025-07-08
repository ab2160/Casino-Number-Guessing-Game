# Casino Number Guessing Game
# Introduction

This C++ program implements a console‐based number guessing game. It uses `srand(time(NULL))` and `rand()` to generate a secret integer between 1 and 50. The player enters guesses until they find the correct number, receiving “Too high!” or “Too low!” feedback on each attempt. A counter tracks how many tries the player uses, and after a successful guess, the user can choose to play another round by entering “Yes” or end the game by entering “No.”

 How It Works
 
- Seeding the Random Generator U+000A At the start, `srand(time(NULL))` seeds the pseudo‐random number generator with the current time, ensuring a different sequence of random values on each program execution.
  
- Outer Play again Loop
  
The `while (playagain == "Yes”) ` loop allows multiple rounds without restarting the program. Before each round, `num` is reset to a new random value in the range 1–50, and `tries` is implicitly reset when the program logic is extended to do so.

 - Inner Guessing Loop
   
The `while (guess != num)` loop repeatedly prompts for the player’s `guess`, increments the `tries` counter, and compares `guess` to `num`. It prints:

 - “Too high!” if `guess > num`
   
 - “Too low!” if `guess < num`
   
 - “CORRECT! Number of tries: X” if `guess == num`
   
 - Prompt to Play Again U+000A After a correct guess, the program asks “Play Again (Yes/No):” and reads the user’s input into `playagain`. If the user types “Yes,” the outer loop continues for another round; otherwise, it exits.
   
 - Program Termination U+000A Once the outer loop ends (the user enters anything other than “Yes”), the program prints “Thanks for playing.” and returns 0, signaling normal termination.

References

- https://www.youtube.com/watch?v=hfnr2EPzn98&t=245s

- https://www.youtube.com/watch?v=-NA_B_vJP14

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
8. Michael Amare- RCD/2516/2016

