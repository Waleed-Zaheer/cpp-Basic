// Write a program in which	a five-digit number is entered through the keyboard to obtain the reversed number and to determine whether the original and reversed numbers are equal or not

#include<iostream>
using namespace std;

int reverseNumber(int number) 
{
    int reverse = 0;
    while (number > 0)
     {
        int remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }
    return reverse;
}
int main()
{
    system("cls");//just to clear the screens previous text
    int y; //declaration of an integer type variable("a")
    //an integer takes 4 bytes in memory
    cout<<"Enter Any Year : ";//for output on screen
    cin>>y;//for input from hardware

    if (number >= 10000 && number <= 99999) 
    {
        int reversedNumber = reverseNumber(number);
        cout << "Reversed number: " << reversedNumber << endl;

        if (number == reversedNumber) 
        {
            cout << "The original and reversed numbers are equal." << endl;
        }
        else 
        {
            cout << "The original and reversed numbers are not equal." << :endl;
        }
    } 
    else 
    {
        cout << "Invalid input. Please enter a five-digit number." << endl;
    }

    system("pause");
    return 0;    
}