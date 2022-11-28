// given an ofstream object named output, associate it with
// a file named yearsummary.txt for output in a way 
// that truncates (erases) any existing data in the file 
output.open("yearsummary.txt");

// given an ofstream object named output, associate it 
// with a file named yearsummary.txt by opening the file
// for appending.
output.open("yearsummary.txt.", ios::out | ios::app);

//given an ifstream object named input, associate it with
// a file named hostdata by oepning the file for input
input.open("hostdata");