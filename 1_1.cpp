#include <string>
#include<iostream>
// #include<string>
// #include "Question1_1.h"
using namespace std;
using std::string;

class Question1_1 
{
public:
    //int run();
    bool isUniqueChars(const string& str);
    bool isUniqueChars2(const string& str);
    string result(bool value);
}; 



bool isUniqueChars(const string& str)
{
    if (str.length() > 256) 
    {
        return false;
    }

    unsigned int checker = 0;
    
    for (int i = 0; i < str.length(); ++i) 
    {
        int value = str[i] - 'a';

        if ((checker & (1 << value)) != 0)
        {
            return false;
        }

        checker |= (1 << value);
    }

    return true;
}

bool isUniqueChars2(const string& str) 
{
    if (str.length() > 256) 
    {
        return false;
    }

    bool ascii_set[256] = { false };

    for (int i = 0; i < str.length(); ++i) 
    {
        int value = str[i];

        if (ascii_set[value]) 
        {
            return false;
        }

        ascii_set[value] = true;    
    }

    return true;
}

/* Function to print true and false */
string result(bool value)
{
    if (value) 
    {
        return "True";
    }

    return "False";
}

int main() 
{
    string input[] ={"abcde", "aba"};

    for (int i = 0; i < 2; i++) 
    {
        cout << input[i] << " has unique characters: " << result(isUniqueChars(input[i])) << endl;
        cout << input[i] << " has unique characters: " << result(isUniqueChars2(input[i])) << endl;
    }

    return 0;
}