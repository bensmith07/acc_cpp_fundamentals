#include "Tips.h"
#include "Tips.cpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tax_rate;
    double total_bill;
    double tip_rate;
    double tip_amount;
    char keep_going;

    cout << setprecision(2) << fixed;

    cout << "Enter the tax rate: ";
    cin >> tax_rate;
    while (tax_rate <= 0)
    {
        cout << "Tax rate must be greater than 0.";
        cout << "Enter the tax rate: ";
        cin >> tax_rate;
    }

    Tips tips_object(tax_rate);

    keep_going = 'y';
    while (keep_going == 'y')
    {
        cout << "\n********** Tip Helper **********\n\n";
        cout << "Enter the total bill amount: ";
        cin >> total_bill;
        cout << "Enter the desired tip %: ";
        cin >> tip_rate;
        tip_rate = tip_rate / 100;

        tip_amount = tips_object.computeTip(total_bill, tip_rate);

        cout << "\nThe tip should be $" << tip_amount << "\n";
        cout << "\nCompute another tip? (y/n): ";
        cin >> keep_going;
    }

}