// defining members of the Tips class

#include "Tips.h"
using namespace std;

// constructor which accepts the sales tax rate
Tips::Tips(double tax_rate)
{
    taxRate = tax_rate;
}

// computes the desired tip amount given the total_bill
// and the desired tip rate (1-100)
double Tips::computeTip(double totalBill, double tipRate)
{
    // calculate the meal cost (before tax)
    double mealCost = totalBill / (1 + taxRate);
    // calculate the tip amount
    double tipAmount = mealCost * tipRate;

    return tipAmount;
}