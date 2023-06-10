// Write a program in which user Any integer input through the keyboard to find out whether it is an odd number or even number
#include<iostream>
using namespace std;
int main()
{
    system("cls");//just to clear the screens previous text
    int a; //declaration of an integer type variable("a")
    //an integer takes 4 bytes in memory
    cout<<"Enter Any integer : ";//for output on screen
    cin>>a;//for input from hardware

    bool flag;//default false
    if (a%2==0)//check for the even or odd
    {
        flag= true;//it is even(as 2,4,6,8)
    }
    else
    {
        flag = false;//it is odd(as 1,3,5,7)
    }
    cout<<endl;
    if (flag== true)
    {
        cout<<"Your Entered integer is "<<a <<" and it is Even."<<endl;
    }
    else
    {
        cout<<"Your Entered integer is "<<a <<" and it is Odd."<<endl;
    }
    system("pause");
    return 0;    
}