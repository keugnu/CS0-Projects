// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   10/11/2014
// Assignment:		Lecture Homework #4 Exercise #2
// Compiler:		Visual C++ 2010

// Description:
// This program gives an option to a user to select a minute package for their cell phone plan and calculates what
// the bill will be when the user inputs how many minutes they used for the month.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // settings constants
   const double OVERAGE_RATE_A = 0.45;    // overage cost per minute for package A
   const double OVERAGE_RATE_B = 0.40;    // overage cost per minute for package B
   const int MINUTES_PACK_A = 450;        // 450 minutes
   const int MINUTES_PACK_B = 900;        // 900 minutes
   const double COST_PACKAGE_A = 39.99;   // base cost of package A
   const double COST_PACKAGE_B = 59.99;   // base cost of package B
   const double COST_PACKAGE_C = 69.99;   // base cost of package C


   // declaring variables
   char selectedPackage;   // for storing user selected package
   int totalMinutes;       // for storing amount of minutes used
   int overages;           // for storing overage of minutes
   double totalCost;       // for calculating baseCost + overages

   // print available minute packages
   cout << "Please review the available packages:" << endl << endl
      << setw(15) << left << "Package A:" << "For $39.99 per month 450 minutes are provided." << endl << right << setw(55) << "Additional minutes are $0.45 per minute." << endl << endl
      << setw(15) << left << "Package B:" << "For $59.99 per month 900 minutes are provided." << endl << right << setw(55) << "Additional minutes are $0.40 per minute." << endl << endl
      << setw(15) << left << "Package C:" << "For $69.99 per month unlimited minutes are provided." << endl << endl
   // ask user to input selection of minute package
      << "Choose package A, B, or C: ";
   cin >> selectedPackage;
   // ask user to input amount of minutes used
   cout << "Thanks for your selection! How many minutes did you use this month? ";
   cin >> totalMinutes;

  
   if (selectedPackage == 'A' || selectedPackage == 'a') // user selected A (450 minutes)
   {
         overages = totalMinutes - MINUTES_PACK_A;

         if (overages > 0) // user went over 450 minutes
         {
               totalCost = COST_PACKAGE_A + (overages * OVERAGE_RATE_A);
               // print total cost of bill
               cout << setprecision(2) << fixed << "Your total cost including overages is: $" << totalCost << "." << endl;
          } // end if user went over 450 minutes 

          else // user did not go over 450 minutes
          {
               cout << "You did not go over your minutes! Your total cost is $" << COST_PACKAGE_A << "." << endl;
          } // end else user did not go over
   } // end if user selected package A

   else if (selectedPackage == 'B' || selectedPackage == 'b') // user selected B (900 minutes)
   {
         overages = totalMinutes - MINUTES_PACK_B;

         if (overages > 0) // user went over 900 minutes
         {
               totalCost = COST_PACKAGE_B + (overages * OVERAGE_RATE_B);
               // print total cost of bill
               cout << setprecision(2) << fixed << "Your total cost including overages is $" << totalCost << "." << endl;
         } // end if user went over 900 minutes

         else // user did not go over 900 minutes
         {
               cout << "You did not go over your minutes! Your total cost is $" << COST_PACKAGE_B << "." << endl;
         } // end else user did not go over 900 minutes
   }
   else if (selectedPackage == 'C' || selectedPackage == 'c') // user selected C (unlimited minutes)
   {
      // print total cost of bill
      cout << "Your total cost is $" << COST_PACKAGE_C << "." << endl;
   }

   else if (selectedPackage != 'A' || selectedPackage != 'a' || selectedPackage != 'B' || selectedPackage != 'b' || selectedPackage != 'C' || selectedPackage != 'c') // if user does not select A B or C
   {
      // print error
      cout << "You did not make a valid package selction." << endl << endl;
   }





   return 0;


} // end function main()