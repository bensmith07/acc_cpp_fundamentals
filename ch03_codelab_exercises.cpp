// 10968: Write a statement that reads a floating point value 
//        from standard input into temperature. Assume that temperature 
//        has already been declared as a double variable
cin >> temperature;

// 10534: Write an expression that computes the average of the variables exam1 and exam2
//        (both declared and assigned values)
(exam1 + exam2) / 2

// 10514: Write a complete program that:
//              - declares an integer variable
//              - reads a value from the keyboard into that variable, and
//              - writes to standard output a line containing the square of the variables value
#include <iostream>
using namespace std;
int main()
{
    int value;
    cin >> value;
    cout << value * value;
    return 0;
}

// 10519: Decalare an int constant, MonthsInYear, whose value is 12
const int MonthsInYear = 12;

// 10541: Given an integer variable bridgePlayers, write a statment that 
//        increases the value of that variable by 4
bridgePlayers += 4;

// 10542: Given an integer variable profits, write a statement that 
//        increases the value of that variable by a factor of 10
profits *= 10;

// 10958: Write a statement using the increment operator to increase the value of num_items 
//        (an already decalred integer variable) by 1
num_items += 1;

// 11024: Write the necessary preprocessor directive to enable the use of the stream
//        manipulators like setw and setprecision
# include <iomanip>

// 11025: Assume that m is an int variable tha thas been given a value. Write a statement that 
//        prints it out in a print field of 10 positions
cout << setw(10) << m;

// 11026: Assume that x is a double variable tha thas been given a value. Write a statement that 
//        prints it out with exactly three digits to the right of the decimal, no matter how big 
//        or miniscule its value is. 
cout < setprecision(3) << fixed << x;

// 11032: A variable c of type char has been decalred. Write the necessary code to read in the next 
//        character from standard input and store it in c, regardless of whether it is a whitespace
//        character
cin.get(c);

// 11033: Declare a sting named line and write a statment that reads in the next line of standard
//        input into this variable
string line;
getline(cin, line);

// 11035: Write the necessary preprocessor directive to enable the use of functions like sqrt and sin
#include <cmath>

// 11034: The area of a square is stored in a double variable named area. Write an expression whose
//        value is the length of one side of the square.
sqrt(area)