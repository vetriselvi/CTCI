#include <iostream>
// #include "Question1_2.h"

using std::cout;
using std::endl;

void reverse(char* str) 
{
    char *ptrEnd = str;
    char temp;

    if (str) 
    {
        while (*ptrEnd) 
        {
            ptrEnd++;
        }
        ptrEnd--;

        while (str < ptrEnd) 
        {
            temp = *str;
            *str++ = *ptrEnd;
            *ptrEnd-- = temp;
        }
    }
}

int main() 
{
    char input[][10] = { "abcde", "cat" };

    for (int i = 0; i < 2; i++) 
    {
        cout << "reversing the string: " << input[i] << endl;
        reverse(input[i]);
        cout << "reverse of input string is " << input[i] << endl;
    }

    return 0;
}