// Write the definition of a printDottedLine which has no 
// parameters and doesn't return anything. The function prints to standard 
// output a single line (terminated by a new line character) consisting of 
// 5 periods
void printDottedLine()
{
	cout << ".....\n";	
}

/* printLarger is a function that accepts two int parameters and returns no value. 
Two int variables, sales1 and sales2, have already been declared and initialized.
Write a statment that calls print Larger, passing it sales1 and sales2. */

printLarger(sales1, sales2);

/* write the definition of a function printGrade, which has a char parameter and 
returns nothing. The function prints on a line by itself the message string
"Grade: " followed by the char paramater (printed as a character) to standard 
output. Don't forget to put a new line character at the end of your line. */

void printGrade(char grade)
{
    cout << "Grade: " << grade << "\n";
}

/* write a statement that declares a prototype for a function add, which has two 
int parameters and returns an int. */
int add(int, int);

/* Add is a function that accepts two int parameters and returns their sum. 
Two int variables, euroSales and asiaSales, have already been declared and initialized. 
Another int variable, eurasiaSales, has already been declared. Write a statment
that calls add to compute the sum of euroSales and asiaSales and store this value in 
eurasiaSales. */
eurasiaSales = add(euroSales, asiaSales);

/* Write the definition of a function signOf that receives an integer parameter and
returns a -1 if the parameter is negative, returns 0 if the parameter is 0, and 
returns 1 if the parameter is positive. */
int signOf(int num)
{
	if (num < 0)
		return -1;
	else if (num == 0)
		return 0;
	else
		return 1;
}

// Write the definition of a function add, which receives two integer parameters
// and returns their sum. 
int add(int num1, int num2)
{
    return num1 + num2;
}

// Write the defintion of a function min that has two int parameters and returns
// the smaller. 
int min(int num1, int num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}

// Write the definition of a function isSenior that receives an integer parameter 
// and returns true if the parameter's value is greater than or equal to 65, and
// false otherwise. 
bool isSenior(int age)
{
	if (age >= 65)
		return true;
	else
		return false;
}

// Write a function addONe that adds 1 to its int reference parameter and returns nothing. 
void addOne(int &num)
{
	num++;
}

/*Write the definitions for three functions named max. Each receives two parameters,
of the same type, and returns the larger of the two values. Define one of these to 
apply to type double, another to int and another to char. */
int max(int par1, int par2)
{
	if (par1 > par2)
		return par1;
	else
		return par2;
}

double max(double par1, double par2)
{
	if (par1 > par2)
		return par1;
	else
		return par2;
}

char max(char par1, char par2)
{
	if (par1 > par2)
		return par1;
	else
		return par2;
}

/* max is a function that accepts two int parameters and returns the value of the larger one. 
Two int variables, population1 and population2, have already been declared and initialized. 
Write an expression (not a statement) whose value is the larger of population1 and population2 
by calling max.*/
max(population1, population2)