// NAME: Ben Smith
// PROGRAM STATUS: Complete

// This program creates two integer arrays, one with an even number
// of elements and one with an odd number of elements. It sorts and 
// finds the median of these two arrays, then displays the arrays 
// along with their respective medians. 

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm> 
using namespace std;

int main()
{	
	const int size_arr1 = 10;	// size of the even numbered array
	const int size_arr2 = 9;	// size of the odd numbered array

	int arr1[size_arr1] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};	// the even numbered array
	int arr2[size_arr2] = {17, 32, 45, 68, 99, 101, 67, 89, 22};		// the odd numbered array

	int get_median(int arr[], int size);	// returns the median of an array
	void print_array(int arr[], int size);	// prints the elements of an array

	// sort the arrays
	sort (arr1, arr1+size_arr1);	
	sort (arr2, arr2+size_arr2);

	// display the arrays along with their respective medians
	cout << "Median of the even array" << endl;
	print_array(arr1, size_arr1);
	cout << endl;
	cout << "is " << get_median(arr1, size_arr1) << endl;
	cout << "Median of the odd array" << endl;
	print_array(arr2, size_arr2);
	cout << endl;
	cout << "is " << get_median(arr2, size_arr2) << endl;

}

// this function takes in an integer array and its size
// and returns the median of that array
int get_median(int arr[], int size)
{	
	int median;

	// calculate the median for an even numbered array
	if (size % 2 == 0)
	{	
		median = (*(arr+((size-1) / 2)) + *(arr+((size-1) / 2 + 1))) / 2; 
	}
	// calculate the median for an odd numbered array
	else
	{
		median = *(arr+(((size-1) / 2)));
	}

	return median;
}	

// this function prints the elements of an integer array on a single line, 
// separated by spaces
void print_array(int arr[], int size)
{
	int i;
	// loop through and print each element of the array
	for (i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}

}



