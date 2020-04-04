/**
Written By:   Victor Garcia
Assignment: HW04.10 programming projects pg. 107
Class: CS 116
Date: 03/11/2020
Description: Modify your program from Programming Project 9 so that it outputs the
sum of all positive numbers, the average of all positive numbers, the sum
of all nonpositive numbers, the average of all nonpositive numbers, the
sum of all positive and nonpositive numbers, and the average of all numbers
entered.

*/

#include <iostream>
using namespace std;
int main()
{
    /** Declaring Variables */
    const int NUMBER_OF_INPUT = 10;
    int num, count = 1, posNum = 0, negNum =0, realNum =0;
    double sumOfPosNum = 0, sumOfNegNum = 0, sumOfRealNum = 0, averagePos = 0,
    averageNeg = 0, averageReal = 0;

    /** Main Prompt for User */
    cout << "This program will ask for ten real numbers and will display the sum of all positive numbers,\nthe average of all positive numbers, the sum" <<
    "of all nonpositive numbers, the average of all\nnonpositive numbers, the sum of all positive and nonpositive numbers, and the average of all\nnumbers " <<
    "entered.\n";

    cout << endl; //blank line
    cout << "Please enter ten real digits: ";
    /** Loop to repeat extraction of ten inputs without declaring them*/
    while (count++ <= NUMBER_OF_INPUT)
    {
        cin >> num;
        if (num >= 0 || num < 0)
        {
            if (num >= 0)
            {
                sumOfPosNum += num; //adding any positive ONLY numbers to sum of pos
                posNum++; //count the number of times condition was met
            }else
            {
                sumOfNegNum += num; //adding any negative ONLY numbers to sum of neg
                negNum++;
            }
            }else
            {
                cout << "Error.";
            }

        sumOfRealNum += num; //this will catch any VALID input and add it to total sum
        realNum++;
    } //end of loop

    /** Calculations */
    averagePos = (sumOfPosNum / posNum);
    averageNeg = (sumOfNegNum / negNum);
    averageReal = (sumOfRealNum / NUMBER_OF_INPUT);

    /** Final Output */
    cout << "Sum of all numbers: " << sumOfRealNum << endl << "Sum of positive numbers: " << sumOfPosNum << endl << "Sum of negative numbers:  " <<sumOfNegNum <<
    endl << "Average of positive numbers: "<< averagePos << endl << "Average of negative numbers: " << averageNeg << endl << "Average of all numbers: " << averageReal;
    return 0;
}
