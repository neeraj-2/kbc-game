Quiz-game in C++
                                            Github Repo Link: https://github.com/neeraj-2/kbc-game

Description: 
This is a simple quiz of 10 questions of Multiple Choice(Single Correct) which calculates the total score on basis of correct answers and finally shows you that how many questions you correctly answered.

Steps for running the program locally:

Step 1: (Via Github) Clone the repo and save it in some local directory or just copy the source code from the game.cpp file and paste it in some local cpp file
Step 2: Open the command prompt in that local directory where you have source code saved.
Step 3: Run the command `gcc game.cpp -o game.exe`
Step 4: Now run the command ‘game’

Analysis of source Code game.cpp file:

The program is coded in C++ programming language and it uses only 2 variables named as response and score for taking the response of answers from the user and storing score of correctly answered questions respectively. Hence I tried to use minimum variables to minimize the run time memory usage. I used a while loop for taking responses from users. After complete execution, the program shows the score and correct answers to the user as a result of the quiz.

Asymptotic Analyses of the program:

1. Space Complexity: O(1)
2. Time complexity: O(1)

How my program runs on Online Compiler:

I ran my program on Codechef online compiler(https://www.codechef.com/ide?itm_medium=navmenu&itm_campaign=ide) and analyzed the time and memory usage:

Time: 0 seconds,
Mem: 5.972KB

Limitation of the above program:

It can be run only on machines having gnu or gcc compiler installed.

