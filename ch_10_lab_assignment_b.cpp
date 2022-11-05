/* 

Write a program that will be used to gather 
statistical data about the number of movies 
college students see in a month.  
The program should ask the user how many students
were surveyed and dynamically allocate an array 
of that size.  The program then should allow 
the user to enter the number of movies each 
student has seen.  It should then sort the 
scores and calculate the average.

Modularity:

Main:  The main function should accept the number 
of students from the user and dynamically create 
an array large enough to contain number of movies 
watched for each student. 
Input validation:  The number of students should 
be a positive integer.   
Print the average and free the allocated array 
when complete.

Get the data.  This function should get the number 
of movies watched by each college student.
Input validation:  The number of movies should be 
a positive integer.

Sort the data.  This function should sort the 
array in ascending order. Note you may use the 
Standard Template Library sort function or your 
own sort function.  
To use the STL sort:
Add #include <algorithm> to your program
sort (arrayname, arrayname + size of array) (beginning and ending elements)

Display: This function should display the sorted 
list of the number of movies watched.

Average: This function should be a value-returning
function that calculates the average of the movies 
watched and returns it to the main function.

*/


// TODO: input validation doesn't catch negative numbers

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm> 
using namespace std;

void get_data(int students[], int n);


int main()
{   
    unsigned int n;             // number of data points
    int* students = nullptr;    // pointer to data array
    bool valid = false;         // for input validation

    // get the number of data points and validate input
    do
    {
        cout << "Enter the number of data points: ";
        cin >> n;
        // input is good - exit the loop
        if (cin.good())
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

    students = new int[n];
    get_data(students, n);
    print_array(students, n);
    
    
    delete [] students;
    return 0;

}

void get_data(int students[], int n)
{   
    unsigned int input;
    bool valid = false;

    for (int i = 0; i < n; i++)
    {   
        do
        {
            cout << "Enter data for student #" << i << ": " << endl;
            cin >> input;
            // input is good - exit the loop
            if (cin.good())
            {
                *(students + i) = input;
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
    }
}








