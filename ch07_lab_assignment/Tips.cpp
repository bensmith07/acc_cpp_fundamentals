#include "Tips.h"
using namespace std;

Tips::Tips(double tax_rate)
{
    taxRate = tax_rate;
}

double Tips::computeTip(double totalBill, double tipRate)
{
    double mealCost = totalBill / (1 + taxRate);
    double tipAmount = mealCost * tipRate;
    return tipAmount;
}