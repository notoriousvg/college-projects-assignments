/**
Written By: Victor Garcia
Date: 03/04/2020
Description: This is small simple project that will give you the approximate monthly car payment of a vehicle and
may repeat as long as user wants
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool moveOn = false;
    char tryAgain;
    //description of the program and initial prompt for the user
    cout << "This program is designed to calculate the approximate monthly payment on the vehicle of your choice.\n" <<
         "Please have these things at your disposal:\n"
         << "\tInitial Balance\n\tInterest Percent Rate\n\tDesired Finance Period (Months)\n\tTax Percentage\n" << endl;
    /** Main Loop */
    do {
    float interestRate, carPrice, taxes, monthlyPayment, period, monthlyInterestRate, subTotal, priceTax;

    //get info from keyboard
    cout << "What is the initial balance of the vehicle (with down payment deducted from price): ";
    cin >> carPrice;
    cout << "What is the interest rate in decimal: ";
    cin >> interestRate;
    cout << "What is the desired finance period in months: ";
    cin >> period;
    cout << "What is the tax rate in decimal: ";
    cin >> taxes;
    cout << endl;
    //Calculations
    priceTax = carPrice * taxes;
    subTotal = carPrice + priceTax;
    monthlyInterestRate = (interestRate / 12.0);
    monthlyPayment = subTotal * (monthlyInterestRate * (pow((1 + monthlyInterestRate), period)) / (pow((1 + monthlyInterestRate), period) - 1));

    cout.setf(ios::fixed); //Used to specify fixed point notation
    cout.setf(ios::showpoint); //Used to specify that the decimal point will always be shown
    cout.precision(2); //Used to specify that ten decimal places will always be shown
    cout << "The approximate monthly payment on a $" << carPrice << " vehicle for an amount of " << period
    << " months with an\ninterest rate of " << interestRate << " is $" << monthlyPayment << endl;
    cout << endl;
    /** Asking user for input and repeat as long as input is not correct */
    do
    {
        cout << "Would you like to make another calculation?('y' for yes or 'n' to end): ";
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
    }while (tryAgain == 'y' || tryAgain == 'Y');
    cout << "\nThank you for using this program!" << endl;
    return 0;
}
