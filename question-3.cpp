// Develop a program to fin the sum of first and last-digit of a number

#include<iostream>
using namespace std;

int main()
{
    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    int lastDigit = num_1 % 10;
    int firstDigit;
    
    while (num_1 != 0)
    {
        firstDigit = num_1 % 10;
        num_1 /= 10;
    }

    cout << firstDigit << " + " << lastDigit << " = " << firstDigit + lastDigit;
    
    return 0;
}