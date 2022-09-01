// Write an expression that evaluates to true if and 
// only if the integer x is greater than the integer y
x > y

// Assume that a bool variable workedOvertime has been
// declared, and that an int variable hoursWorked has been
// declared. Write a statement that assigns the value of 
// workedOvertime to true if hoursWorked is greater than 40
// and false otherwise
workedOvertime = hoursWorked > 40;

// Write a conditional that assigns 10,000 to the variable
// bonus if the value of the variable goodsSold is greater
// than 500,000
if (goodsSold > 500000)
    bonus = 10000;

// Write a statment that both adds 1 to deansList and prints
// studentName to standard out if gpa exceeds 3.5
if (gpa > 3.5)
    {
        deansList += 1;
        cout << studentName;
    }

// Write an if/else statement that assigns true to the variable
// fever if the variable temperature is greater than 98.6;
// otherwise it assigns false to fever
if (temperature > 98.6)
    fever = true;
else
    fever = false;

// Write an if/else statement that adds 1 to the variable minors
// if the variable age is less than 18, adds 1 to the variable
// adults if age is 18 through 64, and adds 1 to the variable
// seniors if age is 65 or older
if (age < 18)
	minors += 1;
else if (age >= 18 and age <= 64)
	adults += 1;
else
	seniors += 1;

// Given the variables temperature and humidity, write an 
// expression that evaluates to true if an only if the 
// temperature is greter than 90 and the humidity is less than 10
temperature > 90 and humidity < 10


// Given the integer variables yearsWithCompany and department, 
// write an expression that evaluates to true if yearsWithCompany is
// less than 5 and department is not equal to 99
yearsWithCompany < 5 and department != 99

// Given the boolean variable isFullTimeStudent and the integer
// variable age, write an expression that evaluates to true if
// age is less than 19 or isFullTimeStudent is true. 
age < 19 or isFullTimeStudent

// Clunker Motors is recalling all vehicles from model years 
// 2001-2006. Given a variable modelYear write a statement that 
// prints the message "RECALL"  if modelYear falls within that range
if (modelYear >= 2001 and modelYear <= 2006)
	cout << "RECALL";
// Write a statment that prints the message "NO RECALL" if the
// modelYear DOES NOT fall within that range
if (modelYear < 2001 or modelYear > 2006)
	cout << "NO RECALL";

// assume that c is a char variable tha thas been decalred and 
// already given a value. Write an expression whose value is true
// if and only if c is a newline character. 
c == '\n'

// write a swith statement that prints out the appropriate label 
// from the given list based on status
