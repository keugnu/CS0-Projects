// Lab 3 Exercise 1
// Input uing cin >>
// Program by: Stephen-Michael Brooks

#include <iostream>
#include <string>

using namespace std;

int main()
{
   float fltVal;
   int intVal;
   char ch1, ch2;
   string name;

      // user input of char 1
      cout << "Enter a character: ";
      cin >> ch1;
      // user input of int
      cout << "Enter a number: ";
      cin >> intVal;
      // user input of char 2
      cout << "Enter another character: ";
      cin >> ch2;
      // user input of string
      cout << "Enter a name: ";
      cin >> name;
      // user input of floating point value
      cout << "Enter a floating point value: ";
      cin >> fltVal;

      // output of user inputs to variables
      cout << endl << "char 1 = " << ch1 << endl;
      cout << endl << "int value = " << intVal << endl;
      cout << endl << "char 2 = " << ch2 << endl;
      cout << endl << "Name is: " << name << endl;
      cout << endl << "float value = " << fltVal << endl;

      return 0;

} // end function main()
