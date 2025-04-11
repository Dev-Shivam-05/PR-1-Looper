// Develop a program to count the total Numberof digit in number

#include<iostream>
using namespace std;

int main()
{

    int num_1,i=0;

    cout << "Enter A Number : ";
    cin >> num_1;

    while (num_1 != 0)
    {
        num_1 /= 10;
        i++;
    }
    cout << i;
    
    
    return 0;
}