#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    cout << "Hey there! This is a simple game of 10 q";
    cout << "Using following menus, You can start the game\n: Just type options defined in following menu. For ex. if you want to know the rules of the game you can type 1 and I will display the rules to you.Similarly choose one of the option given below.";
    while (true)
    {
        cout << "Choose following options\n 1. For knowing rules type 1\n 2. For start the game type 2\n 3. For terminating the program, type 3.\n ";
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << "Here are the rules: 1.You will be given 10 q. You will be given 4 options for that particular q (a,b,c,d like that).You have to select any one of options 'a','b','c', or'd' which you think is correct for that particular q. On the basis of your responses I will calculate the total score and will tell you the final score.You can't exit the program in between.\n";
        }
        else if (n == 2)
        {
            long long score = 0;
            char response;

            //<<<Q1>>
            cout << "Q1: What is the full form of www :\n A.world wide web\n B. wide world web\n C.web world wide\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'A')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'B' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            // Q2
            cout << " Q2: What is the full form of GUI :\n A.graphical user interface \n B. graphical user interaction\n C.graphical user integer\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'A')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'B' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }

            //<<<<< Q3 >>>

            cout << " Q3: What is the full form of AGP :\n A.Accelerated Graphics Portability\n B.Accelerated Graphics Port\n C.Accelerated Graphical Port\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'B')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'A' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q4 >>>

            cout << " Q4: What is the full form of BIOS :\n A.Basic Input Output software\n B.noneofmentioned\n C.Basic integer of System\n D.Basic Input Output System\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'D')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'A' || response == 'B' || response == 'C')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q5 >>>

            cout << " Q5: What is the full form of ECC :\n A.Error Correction Code\n B. Error collection Code\n C.Error Correction Conflicts\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'A')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'B' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q6 >>>

            cout << " Q6: What is the full form of ISO  :\n A.Interrealted Standards Organization\n B. International System Organization\n C.International software Organization\n D.International Standards Organization\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'D')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'A' || response == 'B' || response == 'C')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q7 >>>

            cout << " Q7: What is the full form of MAC :\n A.Media access control\n B. Media access control\n C.web world wide\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'A')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'B' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q8 >>>

            cout << " Q8: What is the full form of AJAx:\n A.Asynchronous JavaScript And XML \n B. Asynchronous Java And XML\n C.Asynchronous JavaScript And Xerox\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'A')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'B' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q9 >>>

            cout << " Q9: What is the full form of CSS :\n A.Cascading Style Sheet\n B. Current Style Sheet\n C.Cost Style Sheet\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:/n";

            cin >>
                response;
            if (response == 'A')
            {
                cout << "Good! let's move to next q.\n";
                score++;
            }
            else if (response == 'B' || response == 'C' || response == 'D')
            {
                cout << "Good! let's move to next q.\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }
            //<<<<< Q10 >>>

            cout << " Q10: What is the full form of SQL:\n A.Stored Query Language\n B. Structured Questioned Language\n C.Structured Query Language\n D.noneofabove\n";
            cout << "Type which option seems correct to you. A or B or C or D. Type any of above letter:\n";

            cin >>
                response;
            if (response == 'C')
            {
                cout << "Awesome!.\n";
                score++;
            }
            else if (response == 'A' || response == 'B' || response == 'D')
            {
                cout << "Great\n";
            }
            else
            {
                cout << "You did not enter any of options('A','B','C' or 'D')";
            }

            cout << "Great. You have answered all q succesfully.Here is your score.\n";
            cout << "Correctly Answered: " << score << "\n";
            cout << "Well Done!\n I am exiting you from the program. Thanks";
            break;
        }
        else if (n == 3)
        {
            cout << "I am exiting you from the program. Thanks";
            break;
        }
        else
        {
            continue;
        }
    }
}