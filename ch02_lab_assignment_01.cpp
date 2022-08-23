// NAME: Ben Smith
// PROGRAM STATUS: Complete

/*
    This program computes and displays the necessary sale price in order to 
    achieve a 35% profit on a flash drive which cost $8.00 to produce.
*/

#include <iostream>
using namespace std;

int main()
{
    float cost = 8.0,               // production cost of the item
          desired_profit = .35,     // desired profit percentage
          price;                    // eventual sale price of the item

    // compute item price
    price = cost * desired_profit + cost;

    // display results
    cout << "To have a " << desired_profit * 100 
         << "% profit, the flash drive should sell for $" 
         << price << ".";
}

    
