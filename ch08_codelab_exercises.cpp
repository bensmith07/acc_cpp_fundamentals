// Declare an array named scores of twenty five elements of type int
int scores[25];

// Write a statement that declares an array of char
// named streetAddress that contains exactly eighty elements
char streetAddress[80];

//Given the array a, write an expression that refers
// to the first element of a
a[0]

//given an array a, declared to contain 34 elements,
// write an expression that refers to the last element 
// of the array
a[33]

// assume that the array monthSales of integers has alread
// been declared and that its elements contain sales data for the 12 months
// of the year in order. Write a statement that writes to standard output the 
// element coresponding to October. 
cout << monthSales[9];

// assume that an array of integers named salarySteps that contains exactly
// five elements has been declared. Write a statment that assigns the value
// 160000 to the last elemen tof the array salarySteps
salarySteps[4] = 160000;

// assume that an array named a, containing exactly five integers has been
// declared and initialized. write a single statement that adds ten to the 
// value stored in the first element of the array. 
a[0] += 10;

// given that an array of int named a has been declared, and that the
// integer variable n contains the number of elements of the array a, 
// assign -1 to the last element in a. 
a[n-1] = -1;

// given that an array of int named a has been declared with 12 elemnts
// and that the integer variable k holds a value between 0 and 6.
// assign 9 to the element just after a[k].
a[k+1] = 9;

// write a statement to declare and initialize an array of int named
// denominations that contains exactly six elements. Your declaration 
// statement should initialize the elements of the array to the 
// following values: 1, 5, 10, 25, 50, 100. 
int denominations[6] = {1, 5, 10, 25, 50, 100};

// given an array of temps of double, containing temperatur edata,
// and an int variable n that contains the number of elements in 
// temps: compute the avaerage temperature and store it in a 
// variable called avgTempt.  Besides temps, n, and avgTemp, you
// may use only two other variables -- an int variable named k
// and a double variable total, which have been declared. 
total = 0;
for (int k = 0; k < n; k++)
	total += temps[k];
avgTemp = total / n;

// printArray is a function that has two parameters. The first parameter
// is an array of element type int and the second is an an int, the number
// of elements in the array. the function prints the contents of the
// array parameter; it does not return a value

// inventory is an array of ints that has been already declared and 
// filled with values. n is an int variable that holds the number of
// elements in the array.

// write a statement that prints the contents of the
// array inventory by calling the function printArray
printArray(inventory, n);

// write a statement that declares a prototype for function printArray,
// which has two parameters. The first parameter is an array of element
// type int and the second is an int, the number of elements in the array.
// the function does not return a value. 
void printArray(int[], int);

// write a funciton definition for the function printArray,
// which has two parameters. The first parameter is an array of element
// type int and the second is an int, the number of elements in the array.
// the function does not return a value. The function prints out each
// element of the array on a line by itself, in the order the elements
// appear in the array, and does not print anything else. 

void printArray(int nums[], int n)
{
	for (int idx = 0; idx < n; idx++)
		cout << nums[idx] << endl;
}

// write the definition of a function named sumArray that receives two
// parameters: an array of element type int and an int that 
// contains the number of elements in the array. The function returns
// the sum of the elements in the array as an int. 
int sumArray(int arr[], int n)
{	
	int sum = 0;
	int idx;
	for (idx = 0; idx < n; idx++)
		sum += arr[idx];
	return sum;
}

// Decalare an 8x8 two dimensional array of strings named chessboard
string chessboard [8][8];


// Declare a two dimensional array of integers named arr with 3 rows and 10 columns
int arr[3][10];

// Given a two dimensional array x of element type int, write an expression 
// whose value is the sum of the element in the 3rd row/4th colun and the 
// element in the 5th row/1st column
x[2][3] + x[4][0]

// given a two dimensional array x of doubles, write an expression whose
// value is twice the value of the lement in the 3rd row and the 2nd column
x[2][1] * 2

// given a tpe Money that is a structured type with two int fields,
// dollars and cents, declare an array monthlySales with 12 elements of type
// Money
Money monthlySales[12];

// Assume that a structure SREC has already been defined. Define a new type,
// ROSTER, that is a structure ocnsisting of an int field, size, and another
// field, grades, that is an SREC array with 500 elements.
struct ROSTER
{
	int size;
	SREC grades[500];
};

