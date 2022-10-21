// NAME: Ben Smith
// PROGRAM STATUS: Complete

// This program reads from a data file containing
// payroll information for 7 employees, then calculates and
// displays their gross pay amounts. The data are first read
// from the file and stored in an array of objects of the type
// Payroll, which includes member variables for hourly pay rate
// and total hours worked, as well as their respective "setter"
// and "getter" functions. The array is then looped through a second
// time, calling the "getter" functions, calculating and displaying
// gross pay. 

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define a class to represent one employees payroll info
class Payroll
{
    private:
        double pay_rate;                // hourly pay rate
        double hours_worked;            // total hours worked
    public: 
        Payroll();                      // constructor
        void set_pay_rate(double);      // sets the hourly pay rate
        void set_hours_worked(double);  // sets the total hours worked
        double get_pay_rate();          // returns the hourly pay rate
        double get_hours_worked();      // returns the total hours worked
};

// Payroll constructor, initializes both values to 0
Payroll::Payroll()
{
    pay_rate = 0;
    hours_worked = 0;
}

// sets the hourly pay rate
void Payroll::set_pay_rate(double pay)
    {pay_rate = pay;}

// sets the total hours worked
void Payroll::set_hours_worked(double hours)
    {hours_worked = hours;}

// returns the hourly pay rate
double Payroll::get_pay_rate()
    {return pay_rate;}

// returns the total hours worked
double Payroll::get_hours_worked()
    {return hours_worked;}


int main()
{   
    const int n_elems = 7;  // number of items in the array
    Payroll arr[n_elems];   // an array of 7 Payroll objects
    double pay;             // hourly pay rate
    double hours;           // total hours worked
    double gross_pay;       // pay * hours = total gross pay
    int i;

    // set precision to show 2 decimal places
    cout << setprecision(2) << fixed;

    // open data file for reading
    ifstream infile;
    infile.open("payroll.dat");

    // set hours worked and pay rate for each 
    // payroll object in the array
    for (i = 0; i < n_elems; i++)
    {   
        // read hours from first column
        infile >> hours;
        // set hours
        arr[i].set_hours_worked(hours);
        // read pay from second column
        infile >> pay;
        // set pay
        arr[i].set_pay_rate(pay);
    }

    // print header
    cout << "EMPLOYEE   GROSS PAY" << endl;
    cout << "========   =========" << endl;

    // print employee number and gross pay for
    // each payroll object in the array
    for (i = 0; i < n_elems; i++)
    {   
        // calculate gross pay
        gross_pay = arr[i].get_pay_rate() * arr[i].get_hours_worked();
        // display employee number and gross pay
        cout << "   " << i+1 << ":   " << "   $ " << gross_pay << endl;
    }

    return 0;
}