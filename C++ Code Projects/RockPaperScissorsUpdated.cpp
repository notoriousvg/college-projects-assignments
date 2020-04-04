/**
Written By: Victor Garcia
Date: 03/10/2020
Class: CS 116
Assignment: Practice Programs Pg. 172 - # 1
Description: Write a program to score the paper-rock-scissor game.The program then announces the winner as well
as the basis for determining the winner: Paper covers rock, Rock breaks scissors, Scissors cut paper, or Nobody
wins. Be sure to allow the users to use lowercase as well as uppercase letters. Your program should include
a loop that lets the user play again until the user says she or he is done.
*/

#include <iostream>
using namespace std;
int main()
{
    /** Variable Declaration */
    char userOneInput, userTwoInput, tryAgain;
    bool moveOn = false;

    /** Main Prompt */
    cout << "ROCK, PAPER, SCISSORS!" << endl;
    cout << "This is a two player game that will ask each user to input (r) for 'rock',(p) for 'paper'\nand (s) for scissors." <<
    "Then, the winner will be chosen!" << endl;

    /** Main Loop */
    do{
        cout << "\nPlayer 1, Enter your choice ('r', 'p', or 's'): ";
        cin >> userOneInput; //extracting input from user
        cout << "\nPlayer 2, Enter your choice ('r', 'p', or 's'): ";
        cin >> userTwoInput; // extracting input from user
        cout << endl;

        /** Conditions if user picks Rock */
        if (userOneInput == 'r' || userOneInput == 'R')
        {
            if (userTwoInput == 'r' || userTwoInput == 'R')
            {
                cout << "It's a tie!";
            }else if (userTwoInput == 's' || userTwoInput == 'S')
            {
                cout << "Player One Wins!";
            }else if (userTwoInput == 'p' || userTwoInput == 'P')
            {
                cout << "Player Two wins!";
            }else
            {
                cout << "Sorry, I did not catch that.";
            }
        /** Conditions if user picks Paper */
        }else if (userOneInput == 'p' || userOneInput == 'P')
        {
            if (userTwoInput == 'p' || userTwoInput == 'P')
            {
                cout << "It's a tie!";
            }else if (userTwoInput == 'r' || userTwoInput == 'R')
            {
                cout << "Player One Wins!";
            }else if (userTwoInput == 's' || userTwoInput == 'S')
            {
                cout << "Player Two Wins!";
            }else
            {
                cout << "Sorry, I did not catch that.";
            }
        /** Conditions if user picks Scissors */
        }else if (userOneInput == 's' || userOneInput == 'S')
        {
            if (userTwoInput == 's' || userTwoInput == 's')
            {
                cout << "It's a tie!";
            }else if (userTwoInput == 'p' || userTwoInput == 'p')
            {
                cout << "Player One Wins!";
            }else if (userTwoInput == 'r' || userTwoInput == 'R')
            {
                cout << "Player Two wins!";
            }else
            {
                cout << "Sorry, I did not catch that.";
            }
        /** Conditions if user picks invalid response */
        }else
        {
            cout << "Sorry, I did not catch that.";
        }

        /** Asking user for input */
        cout << endl;//blank line
        do
        {
            cout << "Would you like to play again?('y' for yes or 'n' to end): ";
            cin >> tryAgain;

            /** Switch for catching any input not yes or no */
            switch(tryAgain)
            {
                case 'n':
                case 'N':
                    cout << "Goodbye.";
                    moveOn = true;
                    break;
                case 'y':
                case 'Y':
                    cout << "Great!";
                    moveOn = true;
                    break;
                default:
                    cout << "Please enter a valid response!" << endl;
                    moveOn = false;
            }
        }while (!(moveOn));
    } while (tryAgain == 'y' || tryAgain == 'Y');
    cout << "\nThank you for playing!\n";
    cout << "This is the end of the program." << endl;

    return 0;
}
