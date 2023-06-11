//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include <iostream>
using namespace std;

int main()
{
    int ram_age=0;
    int shyam_age=0;
    int ajay_age=0;
    
    cout << "Enter Ram's age: ";
    cin >> ram_age;
    cout << "Enter Shyam's age: ";
    cin >> shyam_age;
    cout << "Enter Ajay's age: ";
    cin >> ajay_age;
    
    int youngest_age = ram_age;

    string youngest_name = "Ram";
    
    if (shyam_age < youngest_age) 
    {
        youngest_age = shyam_age;
        youngest_name = "Shyam";
    }
    
    if (ajay_age < youngest_age) 
    {
        youngest_age = ajay_age;
        youngest_name = "Ajay";
    }
    
    cout << "The youngest among Ram, Shyam, and Ajay is " << youngest_name << " with age " << youngest_age << "." << endl;
    
    system("pause");
    return 0;
}
