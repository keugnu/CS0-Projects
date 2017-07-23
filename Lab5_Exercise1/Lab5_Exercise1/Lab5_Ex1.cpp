// Lab 5 Exercise 1
// Financial aid program
//
// Program by: Stephen-Michael Brooks

#include <iostream>

using namespace std;

int main()
{
   char student;                 // used for storing 'y' or 'n'
   int income;                   // user input of income
   const int MAX_INCOME = 15000, // max income for max financial aid
             MAX_AID = 1000,     // max aid amount
             MIN_AID = 500;      // min aid

   // ask user if they are a student
   cout << "Are you an undergraduate student? ";
   cin >> student;

   if (student == 'y' || student == 'Y') // begin if user answers yes
   {
      // ask for user's yearly income
      cout << "What is your current yearly income? ";
      cin >> income;

      if (income <= 15000) // income is less than or equal to 15000
      {
         cout << "You qualify for $" << MAX_AID << " in financial aid." << endl;
      }
      else // income is greater than 15000
      {
         cout << "You qualify for $" << MIN_AID << " in financial aid." << endl;
      }
   } // end user answered yes
   else if (student == 'N' || student == 'n') // user is not an undergrad student
   {
      cout << "You do not qualify for financial aid." << endl;
   }
   else // user did not answer corrrectly
   {
      cout << "You did not answer yes or no." << endl;
   }

   return 0;
} //end function main