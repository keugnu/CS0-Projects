// Lab 10 Exercise 2
// Still more counting
//
// Program by: Stephen-Michael Brooks

#include <iostream>
using namespace std;

// function prototypes
void addToArray(int [], int);
void out(int [], int);

int main()
{
   int usernum;                     // holds user input
   const int INDEX = 10;            // constant size for array
   int userArray[INDEX] = { 0 };    // initialize array to 0 for incrementation
   bool T = true;                   // bool for loop

   while (T)
   {
      // ask for user input
      cout << "Please enter a one-digit, non-negative number or 10 to exit: ";
      cin >> usernum;
      // if-else-if structure for user input
      if (usernum <= 9 && usernum >= 0)
         // valid input
         addToArray(userArray, usernum);
      else if (usernum < 0 || usernum > 10)
         // invalid input
         cout << "The value " << usernum << " is not a valid entry." << endl;
      else if (usernum == 10)
         // exit program
         T = false;
   }
   // print results
   cout << endl << endl;
   out(userArray, INDEX);


   return 0;
} // end function main()


// ****************************************************
// addToArray() increments the value in element [num] *
// by one. element [num] is dicatated by the value    *
// entered by the user in main()                      *
// ****************************************************
void addToArray(int posArray[], int num)
{
   posArray[num]++;
} // end function addToArray()

// ****************************************************
// out() prints the values in each element only if    *
// the element has a value above 0.                   *
// ****************************************************
void out(int posArray[], int INDEX)
{
   // traverse array and check if values are above 0
   for (int count = 0; count < INDEX; count++)
   {
      if (posArray[count] > 0)
         cout << "You entered " << posArray[count] << " " << count << "(s)." << endl;
   }
} // end function out()