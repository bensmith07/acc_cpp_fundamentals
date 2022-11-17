#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Case Manipulator – Write a program with three functions:  upper, lower, and flip.  
// Each function should accept a C-string as an argument.  

// The upper function should 
// step through all the characters in the string, converting each to uppercase.  

// The lower function,  should step through all the characters in the string converting, 
// each to lowercase.   

// The  flip  steps through the string, testing each character to 
// determine whether it is upper or lowercase.   If upper, it should convert to lower.  
// If lower, it should convert to upper.

// The main function should accept one string from the user, then pass it to each of the functions.

// Output:   The original string, the uppercase, lowercase, and flipped case strings should all be displayed.

int main()
{

    


    return 0;
}

void upper(char string1[])
{
    int idx = 0; // loop counter

    while (string1[idx] != '\0')
    {
        string1[idx] = toupper(string1[idx]);
        idx++;
    }
}

void lower(char string1[])
{
    int idx = 0; // loop counter
    
    while (string1[idx] != '\0')
    {
        string1[idx] = tolower(string1[idx]);
        idx++;
    }
}

void flip(char string1[])
{
    int idx = 0;

    while (string1[idx] != '\0')
    {
        if (isupper(string1[idx]))
        {
            string1[idx] = tolower(string1[idx]);
        }
        else
        {
            string1[idx = toupper(string1[idx])];
        }
        idx++;
    }
}