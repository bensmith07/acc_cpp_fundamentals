// NAME: Ben Smith
// PROGRAM STATUS: Complete

/*
    This program computes and displays the height in feet-and-inches form
    for a basketball player who is 75 inches tall.
*/

# include <iostream>
using namespace std;

int main()
{
    int total_inches = 75,  // total height in inches
    feet,                   // number of whole feet of height
    inches;                 // number of inches not included in whole feet of height

    // calculate feet and inches
    feet = total_inches / 12;
    inches = total_inches % 12;

    // display results
    cout << "A " << total_inches << " inch tall basketball player is "
         << feet << " feet " << inches << " inches tall.";
    
    return 0;
}