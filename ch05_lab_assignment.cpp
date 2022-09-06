// NAME: Ben Smith
// PROGRAM STATUS: Complete

// This program asks the user to enter today's sales for each of three stores,
// then produces a plain text bar graph displaying each store's sales amount in
// increments of $100. 

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float sales1,   // sales amount for Store #1
          sales2,   // sales amount for Store #2
          sales3;   // sales amount for Store #3

    // get sales amount for Store 1
    cout << "Enter today's sales for store 1: ";
    cin >> sales1;
    // validate input
    while (sales1 < 0)
        {
            cout << "Please enter a positive number for store 1: ";
            cin >> sales1;
        }

    // get sales amount for Store 2
    cout << "Enter today's sales for store 2: ";
    cin >> sales2;
    // validate input
    while (sales2 < 0)
        {
            cout << "Please enter a positive number for store 2: ";
            cin >> sales2;
        }

    // get sales amount for store 2
    cout << "Enter today's sales for store 3: ";
    cin >> sales3;
    // validate input
    while (sales3 < 0)
        {
            cout << "Please enter a positive number for store 3: ";
            cin >> sales3;
        }
    
    // output sales chart
    cout << "\nDAILY SALES";
    cout << "\n(each * = $100)\n";

    cout << "\nStore 1: ";
    for (int count = 0; count < (round(sales1 / 100)); count ++)
        cout << "*";

    cout << "\nStore 2: ";
    for (int count = 0; count < (round(sales2 / 100)); count ++)
        cout << "*";

    cout << "\nStore 3: " ;
    for (int count = 0; count < (round(sales3 / 100)); count ++)
        cout << "*";

    return 0;
}

