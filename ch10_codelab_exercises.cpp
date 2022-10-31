// Assume the variable diff has alreday been declared. Write an expression whose
// value is the address of diff
&diff

// declare a variable ip that can be assigned an address of an int variable
int* ip;

// declare a variable cp that can be assigned an address of a char variable
char* cp;

// write a statement that assignes the address of diff to diffPointer.
diffPointer = &diff;

// Assume that strikeCounter has been declared and initialized as a pointer
// to an int. write an expression whose value is four times that of the 
// variable that strikeCounter is pointing to
*strikeCounter * 4;

// write a statment that assigns the value 27 to the variable that strikeCounter
// is pointer to. 
*strikeCounter = 27;

// write a statment that adds 22 to the variable that strikecounter is pointing to
*strikeCounter += 22;

// assume ip1, ip2, and ip3 have already been declared and initialized as ponters
// to ints. write a statement that computes the sum of the variables pointed to be ip1
// and ip2 and assigns the sup to the variable pointed to by ip3. 
*ip3 = *ip1 + *ip2;

// write an expression that evaluates to one more than the int variable pointed to by ip.
*ip + 1;



// assume that ip has been declared as a pointer to an int and that results has 
// been declared as an array of 100 elements, and that ip has been initialized to 
// point to an element in the first half of the array. write an expression whose
// value is the element after the element that ip points to. 
*(ip+1);

// write a statment that makes ip point to the next element in the array.
ip += 1;

// assume that ip has been declared as a pointer to an int and enrollment
// has been delcared to be an array of 20 elements. write a statement that makes
// ip point to the first element of the array. 
ip = &(enrollment[0]);

// assume that ip and jp have both been delcared to be pointers to ints and that
// results has been declared to be an array of 100 elements. ip has been initialized
// to an element in the first half of the array. write a statement that makes jp 
// point to the element in the array just after the one that ip points to. 
jp = &*(ip + 1);

// tripleIt is a function that takes one argument and returns
// no value. The argument is a pointer to int. the funciton 
// triples the value that the argument points to and stores it back.
// penalty is an int variable that has been declared and initialized. 
// write a statment that triples the value stored in penalty by invoking 
// the function tripleIt. 
tripleIt(&penalty);

// write a statment that declares a prototype for a function tripleIt
// which can be used as follows: int x=5; tripleIt(&x); // x is now equal to 15
void tripleIt(int*);


// write the definition of a function doubleIt, which doubles the value 
// of its argument but returns nothing, so that it can be used as follows:
// int x=5; doubleIt(&x); // x is now equal to 10
void doubleIt(int* ptr)
    {*ptr *= 2;}

// given the variable ip, already declared as a pointer to an integer, 
// write the code to dynamically allocate memory for a single integer value, 
// assign the resulting pointer to ip, and initialize the integer value to 27
ip = new int;
*ip = 27;

// the variable dp refers to an array of type double. Assuming the integer variable
// n has been assigned a value, declare dp appropriately, allocate an array of n doubles
// and assign the resulting pointer to dp. 
double* dp;
dp = new double[n];