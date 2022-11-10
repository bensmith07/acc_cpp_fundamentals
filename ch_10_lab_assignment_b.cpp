// NAME: Ben Smith
// PROGRAM STATUS: Complete
// This program prompts a user to input a number of data points
// representing student test scores, stores those data points in
// a dynamically allocated array, calculates the average, then displays
// the list of data along with the average. 

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm> 
using namespace std;

void get_data(int arr[], int n);
double average(int arr[], int n);
void display(int arr[], int n);

int main()
{   
    int n;                 // number of data points
    int* arr = nullptr;    // pointer to data array
    bool valid = false;    // for input validation
    double avg;            // average

    // get the number of data points (n) and validate input
    do
    {
        cout << "Enter the number of data points: ";
        cin >> n;
        // input is good - exit the loop
        if (cin.good() and n > 0)
        {
            valid = true;
        }
        // input is invalid, clear the input stream and try again
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "You must enter a positive whole number. Try again." << endl;
        }
    } while (!valid);
    // dynamically allocate an array of size n
    arr = new int[n];
    // prompt the user to input data
    get_data(arr, n);
    // sort the data
    sort(arr, arr+n);
    // calculate the average value
    avg = average(arr, n);
    // display the data and the average
    cout << "Number of Movies Watched:" << endl;
    cout << "-------------------------" << endl;
    display(arr, n);
    cout << "-------------------------" << endl;
    cout << "Average: " << avg;
    // delete the dynamically allocated memory
    delete [] arr;
    return 0;
}

// This function prompts the user to enter a given number
// of student test scores and validates input for only positive integers
void get_data(int arr[], int n)
{   
    int input;              // the user input value
    bool valid = false;     // flag for input validation
    
    // repeat the loop once for each element in the array
    for (int i = 0; i < n; i++)
    {   
        do
        {   
            // get user input
            cout << "Enter data for student #" << i + 11 << ": " << endl;
            cin >> input;
            // input is good - exit the loop
            if (cin.good())
            {
                *(arr + i) = input;
                valid = true;
            }
            // input is invalid, clear the input stream and prompt the user again
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "You must enter a positive whole number. Try again." << endl;
            }
        } while (!valid);
    }
}

// this function calculates the average value in an 
// array of integers of size n
double average(int arr[], int n)
{
    double total = 0;   // for keeping a running total

    // convert n to a float for division
    n = double(n);        
    // get the sum of all values in the array
    for (int i = 0; i < n; i++)
    {
        total += *(arr + i);
    }
    // return the average
    return total / n;
}

// this function displays each element in the array on a new line
void display(int arr[], int size)
{
	// loop through and print each element of the array
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << endl;
	}

}





