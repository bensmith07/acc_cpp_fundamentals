// Given an int variable k that has already been declared, 
// use a while loop to print a single line consisting of 97 asterisks.
// Use no variables other than k
k = 1;
while (k < 98)
	{
		cout << '*';
		k += 1;
	}

// Given an integer variable timer, write a statment that uses the auto-decreent
// operator to decrease the value of that variable by 1
timer--;

// given an int variable i that has already been declared, write a for loop that 
// prints the integers 0 through 39, separated by spaces. 
// Use no variable other than i.
for (i = 0; i < 40; i ++)
    cout << i << " ";

// Write a for loop that prints the odd integeres 11 through 121 inclusive, 
// separated by spaces.
for (int i = 11; i <= 121; i += 2)
	cout << i << " ";

// give nan int variable count that has already been declared, write a for loop
// that prints the integers 50 through 1, separated by spaces. Use no variables
// other than count. 
for (count = 50; count > 0; count--)
	cout << count << " ";

// Write a statement that increments the value of the int variable total by the
// value of the int variable amount. That is, add the value of amount to total
// an assign the result to total. 
total += amount;

// Write a for loop that computes the following sum: 5+10+15+20+...+485+490+495+500.
// The sum should be placed in a variable sum that has already been declared and
// initialized to 0. In addition, there is another variable num that has also 
// been declared. you must not use any other variables. 
for (num = 5; num <=500; num += 5)
	sum += num;

// given int variables k and total that have already been declared, use a for loop
// to compute the sum of the squares of the first 50 counting numbers, and store 
// this value in total.
total = 0;
for (k = 1; k <= 50; k++)
	total += (k * k);

// given int variables k and total that have already been declared, use a do...while
// loop to compute the sum of the squares of the first 50 counting numbers and 
// store this value in total. 
total = 0;
k = 1;

do
	{
		total += (k * k);
		k++;
	}
while (k < 51);

