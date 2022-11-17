// NAME: Ben Smith
// PROGRAM STATUS: Complete

// This program accepts a string from the user, then 
// displays that string in:
//      1. All uppercase
//      2. All lowercase
//      3. With the case of each character 
//         in the original string flipped to its
//         opposite

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{

    const int SIZE = 280;           // maximum size of the input string
    char input[SIZE];               // input string as an array (c-string)
    void upper(char string1[]);     // upper function
    void lower(char string1[]);     // lower function
    void flip(char string1[]);      // flip function

    // get user input
    cout << "Enter a string: ";
    cin.getline(input, SIZE);
    // display in all uppercase
    cout << "Upper: ";
    upper(input);
    cout << endl;
    // display in all lowercase
    cout << "Lower: ";
    lower(input);
    cout << endl;
    // display with original case flipped
    cout << "Flip: ";
    flip(input);
    cout << endl;

    return 0;
}

// This function converts a string to all uppercase
void upper(char string1[])
{
    int idx = 0;                            // loop counter
    char tempstring[strlen(string1 + 1)];   // for storing the coverted characters

    // step through each character
    while (string1[idx] != '\0')
    {   
        // convert to upper and display
        tempstring[idx] = toupper(string1[idx]);
        cout << tempstring[idx];
        idx++;
    }
}

// this function converts a string to all lowercase
void lower(char string1[])
{
    int idx = 0;                            // loop counter
    char tempstring[strlen(string1 + 1)];   // for storing converted characters

    // step through each character
    while (string1[idx] != '\0')
    {
        // convert to upper and display
        tempstring[idx] = tolower(string1[idx]);
        cout << tempstring[idx];
        idx++;
    }
}

// this function flips each character in a string to
// its opposite case
void flip(char string1[])
{
    int idx = 0;                            // loop counter
    char tempstring[strlen(string1 + 1)];   // for storing converted characters

    // step through each character
    while (string1[idx] != '\0')
    {
        // check the case of the character
        // then convert to its opposite and display
        if (isupper(string1[idx]))
        {   
            tempstring[idx] = tolower(string1[idx]);
            cout << tempstring[idx];
        }
        else
        {
            tempstring[idx] = toupper(string1[idx]);
            cout << tempstring[idx];        }
        idx++;
    }
}