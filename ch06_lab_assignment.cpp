// NAME: Ben Smith
// PROGRAM STATUS: Complete

/* This program prompts the user to enter sales amounts for each of 4 regions, then calculates and displays the highest sales
 amount along with its respective region. 
 
NOTE: This program does not account for the possibility of more than one region being tied for the highest sales. 
In this case, it simply treats the first of the tied regions entered as being the highest. */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototypes
double getSales(string);
void findHighest(double, double, double, double);

// main function
int main()
{   
    // define variables
    double sales_northeast, // sales amount for Northeast region
           sales_northwest, // sales amount for Northwest region
           sales_southeast, // sales amount for Southeast region
           sales_southwest; // sales amount for southwest region

    // get sales amounts from user
    sales_northeast = getSales("Northeast");
    sales_northwest = getSales("Northwest");
    sales_southeast = getSales("Southeast");
    sales_southwest = getSales("Southwest");

    // calculate and display the highest sales and region
    findHighest(sales_northeast, sales_northwest, sales_southeast, sales_southwest);

    return 0;
}

// This function accepts the name of a region and prompts the user to enter that region's sales amount. 
// The sales amount is returned. 
double getSales(string region)
{
    double sales; // stores the sales amount entered by the user

    cout << "Enter the quarterly sales for the " << region << ": ";
    cin >> sales;

    return sales;
}

// This function accepts four regional sales amounts, finds the highest amount, then displays that amount and its corresponding region. 
void findHighest(double sales_northeast, double sales_northwest, double sales_southeast, double sales_southwest)
{   
    // define local variables
    double max_sales;   // stores the maximum sales amount
    string max_region;  // stores the name of the region with the highest sales amount

    // calculate highest sales and region
    if ((sales_northeast >= sales_northwest)
            and (sales_northeast >= sales_southeast)
            and (sales_northeast) >= sales_southwest)
        {
            max_region = "Northeast";
            max_sales = sales_northeast;
        }
        

    else if ((sales_northwest >= sales_southeast)
                and (sales_northwest >= sales_southwest))
        {
            max_region = "Northwest";
            max_sales = sales_northwest;
        }
    
    else if (sales_southeast >= sales_southwest)
        {
            max_region = "Southeast";
            max_sales = sales_southeast;
        }
    
    else 
        {
            max_region = "Southwest";
            max_sales = sales_southwest;
        }

    // display highest sales and region
    cout << "\nThe " << max_region << " region had the highest sales this quarter.";
    cout << "\nTheir sales were $" << max_sales;
        
}