// NAME: Ben Smith
// PROGRAM STATUS: Complete
// This program calculates annual tax amount based on a property value and tax rate. 

#include <iostream>
#include <iomanip>
using namespace std;

// This function takes user input for property value and tax rate, then calculates and displays the annual tax amount.
int main()
{
    const double ASSESSED_VALUE_PCT = .6;   // the portion of actual value which will be the assessed value
    double actual_value,                    // the actual value of the property
           tax_rate,                        // the annual tax rate, as dollars per $100 of assessed value
           assessed_value,                  // the tax assessed value of the property
           tax_amount;                      // the annual tax amount due
    
    cout << setprecision(2) << fixed << showpoint;

    // get the property value and tax rate
    cout << "Enter the actual value of the property: ";
    cin >> actual_value;
    cout << "Enter the annual tax rate (in dollars per $100 of assessed value): ";
    cin >> tax_rate;

    // calculate the assessed value and tax amount
    assessed_value = actual_value * ASSESSED_VALUE_PCT;
    tax_amount = assessed_value * (tax_rate / 100);

    // display annual tax amount
    cout << "The annual tax amount is $" << tax_amount << ".";

    return 0;
}