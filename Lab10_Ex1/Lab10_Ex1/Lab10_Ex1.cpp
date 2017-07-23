// Lab 10 Exercise 1
// An array of 10 integers
//
// Program by: Stephen-Michael Brooks

#include <iostream>
using namespace std;

// function prototyoes
void userInts(int &num, int count);
void printIntArray(int num, int count);

int main()
{
   int intArray[10] = { 0 };
   // loop to add values to intarray from console
   for (int count = 0; count < 10; count++)
   userInts(intArray[count], count);
   cout << endl << endl << "The values in reverse order are: " << endl;
   // traverse and print values from intArray in reverse
   for (int count = 9; count >= 0; count--)
   printIntArray(intArray[count], count);
   return 0;
}

void userInts(int &num, int count)
{
   cout << "Enter number " << count+1 << ": ";
   cin >> num;
} // end function userInts
// *******************************************************
// This fucntion changes the values of intArry in main() *
// to user defined values                                *
//********************************************************
void printIntArray(int num, int count)
{
      cout << "Value in number " << count+1 << " is " << num << endl;
} // end function printIntArray
// *****************************************************
// This function prints values in intArray from main() *
// *****************************************************