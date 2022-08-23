/* 
    Flash Drive Price  - An electronics company makes 64 gigabyte 
    USB flash drives that cost them $8.00 apiece to produce.  
    Write  a program to determine how much the company should 
    sell them for if it wants to make a 35 percent profit.   
    Display the result on the screen.   
*/

#include <iostream>
using namespace std;

float cost = 8.0,
      desired_profit = 0.35,
      price;

int main()
{
    price = cost + desired_profit;
    cout << "To have a " << desired_profit * 100 
         << "% profit, the flash drive should sell for $" 
         << price << ".";
}

    
