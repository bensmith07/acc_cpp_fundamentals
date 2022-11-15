#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()

{

string sentence;
string new_sentence;
int length;

cout << "Enter a sentence to separate: " << endl;
cin >> sentence;

new_sentence = sentence[0];

for (int i = 1; i < sentence.length(); i++)
    {
        if (isupper(sentence[i]) == 0)
        {
            new_sentence += sentence[i];
        }
        else
        {
            new_sentence += ' ';
            new_sentence += tolower(sentence[i]);
        }
    }
    
cout << new_sentence;

return 0;
}