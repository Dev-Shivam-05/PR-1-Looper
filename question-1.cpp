// Develop A Program That Prints All alphabets from 'a' to 'z' by skipping 3 alphabets using do-while loop 

#include<iostream>
using namespace std;

int main()
{

    char i='a';// intializing i with 'a'

    do
    {
        cout << i << "  "; // printing i 
        i+=4; // doing increment of i with 4
    }
    while (i<='z');
    

    return 0;
}