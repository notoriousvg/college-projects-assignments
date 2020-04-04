//Written By:   Victor Garcia
//Assignment: HW02.13 programming projects pg. 107
//Class: CS 116
//Date: 03/08/2020
//Description: Write a program that will tell you the output of chocolate bars that
//should be consumed to maintain a certain weight for the appropriate sex depending
//on certain variables: age, height, and weight
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    /** Declaring variables */
    char gender;
    string UserIs;
    double BMR, weightInPounds, heightInInches,ageInYears;
    const double CHOCOLATE_BAR_CAL = 230;

    /** Prompt for the user */
    cout << "This program should then output the number of chocolate bars that should be consumed to maintain a\ncertain weight for the appropriate sex of the specified weight, height, and age.\n";
    cout << "Please enter your weight in pounds: ";//receive input
    cin >> weightInPounds;
    cout << "Great! now, please enter your height in inches: ";//receive input
    cin >> heightInInches;
    cout << "Also, please enter your age in years: ";//receive input
    cin >> ageInYears;
    cout << "Finally, please enter your gender ('M' for male or 'F' for female): ";
    cin >> gender;
    /** Conditions to execute whether user is male or female */
    if (gender == 'M' || gender == 'm' )
    {
        UserIs = "male";
        BMR = 66 + (6.3 * weightInPounds) + (12.9 * heightInInches) - (6.8 * ageInYears);
    }else if (gender == 'f' || gender == 'F' )
    {
        UserIs = "female";
        BMR = 655 + (4.3 * weightInPounds) + (4.7 * heightInInches) - (4.7 * ageInYears);
    }else
    {
        cout << "Please enter a valid response next time." << endl;
    }
    /** Display the results */

    cout << "In order for a " << ageInYears << " year-old " << UserIs << " to maintain a wait your weight of " << weightInPounds << ", the number of chocolate bars that\n" <<
    "you should be able to consume to maintain your weight without needing to exercise are ";
    cout.setf(ios::fixed); //Used to specify fixed point notation
    cout.setf(ios::showpoint); //Used to specify that the decimal point will always be shown
    cout.precision(2); //Used to specify that ten decimal places will always be shown
    cout << (BMR / CHOCOLATE_BAR_CAL) << " chocolate bars.";


    return 0;
}
