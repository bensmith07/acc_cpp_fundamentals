// NAME: Ben Smith
// PROGRAM STATUS: Complete
// This program helps a user calculate the tip amount for a meal
// based on the total bill, and a given tax rate and tip percentage.

#include "Tips.h"       // Tips class definition
#include "Tips.cpp"     // Tips member definitions
#include <iostream>     // needed for cout
#include <iomanip>      // needed for formatting output
using namespace std;

int main()
{
    double tax_rate;    // sales tax rate
    double total_bill;  // total bill amount (including tax)
    double tip_rate;    // desired tip percentage (1-100)
    double tip_amount;  // amount to tip
    char keep_going;    // loop control flag

    // set precision to show 2 decimal places
    cout << setprecision(2) << fixed;

    // get get the sales tax rate
    cout << "Enter the tax rate: ";
    cin >> tax_rate;
    // validate sales tax rate input
    while (tax_rate <= 0)
    {
        cout << "Tax rate must be greater than 0.";
        cout << "Enter the tax rate: ";
        cin >> tax_rate;
    }

    // create the tips object with the given tax rate
    Tips tips_object(tax_rate);

    // start loop for user interface
    keep_going = 'y';
    while (keep_going == 'y')
    {
        cout << "\n********** Tip Helper **********\n\n";
        // get the total bill amount
        cout << "Enter the total bill amount: ";
        cin >> total_bill;
        // get the desired tip percentage
        cout << "Enter the desired tip %: ";
        cin >> tip_rate;
        // turn tip percentage into a decimal rate
        tip_rate = tip_rate / 100;

        // calculate the tip amount
        tip_amount = tips_object.computeTip(total_bill, tip_rate);

        // display tip amount to user
        cout << "\nThe tip should be $" << tip_amount << "\n";

        // determine whether to run the loop again
        cout << "\nCompute another tip? (y/n): ";
        cin >> keep_going;
    }

}