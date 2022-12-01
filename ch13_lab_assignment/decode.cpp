#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char ch;
    fstream file;
    vector<char> file_contents;

    file.open("guidelines.txt", ios::in);
    file.get(ch);
    file_contents.push_back(ch);
    
    while (file)
    {
        file.get(ch);
        ch = char(int(ch) - 10);
        file_contents.push_back(ch);
    }
    file.close();

    file.open("guidelines.txt", ios::out);
    
    for(const char& ch : file_contents ) file << ch;

}