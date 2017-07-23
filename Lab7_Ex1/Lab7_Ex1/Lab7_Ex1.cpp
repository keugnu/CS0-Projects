// Lab 7 Exercise 1
// Display a row of $ characters based on user input
//
// Program by: Stephen-Michael Brooks

#include <iostream>

using namespace std;

int main()
{
   int num,          // for user input
       count;        // for loop counter

   for (count = 0; count < 5; count++)
   {
      cout << "Please enter a number between 1 and 10: ";
      cin >> num;

      while (num < 1 || num > 10) // input validation for range of 1-10
      {
         cout << "That is an invalid number. \nPlease enter a number between 1 and 10: ";
         cin >> num;
      }

      while (num >= 1 && num <= 10) // print "$" <num> number of times
      {
         cout << "$";   
         num--;         // decrement num
      }
      cout << endl;
   } // end outer for
  
   

   return 0;
} // end function main()