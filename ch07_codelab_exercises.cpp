// write a full class definition for a class named Counter, 
// and containing the following members:
//      - a data member counter of type int
//      - a constructor that accepts no arguments and initializes
//        the counter data member to 0
//      - A function called increment that acceps no parameters
//        and returns no value. increment adds one to the counter
//        data member.
//      - A function called getValue that accepts no parameters.
//        it returns the value of the instance variable counter

class Counter
{
    private:
        int counter;
    public:
        Counter()
           { counter = 0; }
        void increment()
            { counter += 1; }
        int getValue()
            { return counter; }
    
};

// Objects of the Calculator class require no additional information
// when created. Define an object named calc, of type Calculator.
Calculator calc;

// Objectws of the BankAccount class require a name (string) and a 
// social security number (string) be specified (in that order) upon
// creation. Define an object named account, of type BankAccount
BankAccount account("John Smith", "123-45-6789");

// Write a full class definition for a class named Accumulator, 
// containing the following members:
//      - a data member named sum of type integer
//      - a constructor that accepts no parameters. the constructor
//        initializes the data member sum to 0
//      - a function named getSum that accepts no parameters and
//        returns an integer. getSum returns the value of sum
//      - a function named add that accepts an integer parameter and
//        add increases the value of sum by the value of the parameter

class Accumulator
{
    private:
        int sum;
    public:
        Accumulator()
            { sum = 0; }
        int getSum()
            { return sum; }
        void add(int n)
            { sum += n; }
};

// Assume the existence of a class named Window with functions named
// close and freeResources, both of which accept no parameters and 
// return no value. Write a destructor for the class that invokes close
// followed by freeResources.

~Window()
{
    close();
    freeResources();
}

// Define a new type called POINT that is a structure consisting of 
// two fields, x and y, both of type double

struct POINT
{
    double x;
    double y;
};

// Given a structure type Money, declare the following variables of that type:
// revenue, expenses, profit

Money revenue, 
      expenses, 
      profit;

// Assume you have a variable price1 of type Money where the latter is a 
// structured type with two int fields, dollars and cents. assign values to 
// the fields so it represents $29.95

price1.dollars = 29;
price1.cents = 95;

// Assume that two variables p1 and p2 of type POINT have been declared 
// (see definition of POINT above) and that p1 has already been initialized.
// Write a statement that gives p2 the same value that p1 has.

p2.x = p1.x;
p2.y = p1.y;
