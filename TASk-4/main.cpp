// Write a program in which	Any year is input through the keyboard to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator).
// The logic for determining a leap year is as follows:

// If the year is not divisible by 4, it is not a leap year.
// If the year is divisible by 4 but not divisible by 100, it is a leap year.
// If the year is divisible by both 4 and 100, it may still be a leap year if it is divisible by 400
#include<iostream>
using namespace std;
bool isLeapYear(int year) 
{
    if (year % 4 != 0) 
    {
        return false;
    } 
    else if (year % 100 != 0) 
    {
        return true;
    } 
    else if (year % 400 != 0) 
    {
        return false;
    } 
    else 
    {
        return true;
    }
}
int main()
{
    system("cls");//just to clear the screens previous text
    int y; //declaration of an integer type variable("a")
    //an integer takes 4 bytes in memory
    cout<<"Enter Any Year : ";//for output on screen
    cin>>y;//for input from hardware

    if (isLeapYear(y)) 
    {
        cout << y << " is a leap year." << endl;
    } 
    else 
    {
        cout << y << " is not a leap year." << endl;
    }

    system("pause");
    return 0;    
}