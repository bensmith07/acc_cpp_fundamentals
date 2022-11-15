// declare a char array named line suitable for storing
// c-strings as large as 50 characters, and write a 
// statement that reads in the next line of standard
// input into this array (assume no more than 50 chars)
char line[51];
cin >> line;

// a US social security number consists of a string of 9 digits
// declare a char array named ssn suitable for storing a social
// security number as a c-string, and write a statement
// that reads in the next 9 characteresof standard input into this
// array. assume that the input contains no spaces or newlines)
char ssn[10];
cin.getline(ssn, 10);

// write an expression that evaluates to true if and only if
// the c-string s equals the c-string "end"
strcmp(s, "end") == 0

// assume that name is a variable of type string that has
// been assigned a value. write an expression whose value is the
// first character of the vale of name.
name[0]

// assume that name  is a variable of type string write an 
// expression whose value is the last character of 
// the value of name
name.back()

// write an expression whose value is the second character
// of the value of name
name[1]