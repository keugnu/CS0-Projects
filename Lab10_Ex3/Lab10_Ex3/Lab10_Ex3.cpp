// Lab 10 Exercise 3
// Fun with strings.
//
// Program by: Stephen-Michael Brooks

#include <iostream>
#include <string>
using namespace std;

// function prototypes
void asknames(string[], int);
void printNames(string[], int);

int main()
{
   const int SIZE = 10;             // declares size for array
   string names[SIZE];              // array to store names
   
      asknames(names, SIZE);        // call function to ask for names
      cout << endl << endl;
      printNames(names, SIZE);      // call function to print list of names

   return 0;
}

// ***************************************************
// asknames() is a loop that asks for user input of  *
// strings to store in array.                        *
// ***************************************************
void asknames(string names[], int size)
{
   for (int count = 0; count < 8; count++)
   {
      cout << "Enter in name " << count + 1 << ": ";
      cin >> names[count];
   }

} // end function asknames()

// **************************************************
// printNames() is a loop that traverses an array   *
// and prints the values in each element.           *
// **************************************************
void printNames(string names[], int size)
{
   for (int count = 0; count < 8; count++)
      cout << "Name " << count + 1 << " is " << names[count] << endl;

} // end function printNames()