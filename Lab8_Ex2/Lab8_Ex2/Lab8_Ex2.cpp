// Lab 8 Exercise 2
// Determine if your heart beat rate is within the 
// target heart rate. 
//
// Program by: Stephen-Michael Brooks

#include <iostream>
using namespace std;

// a funtion that calculates target heart rate
int targethearrate(int age, int heartrate)
{
   int max_heartrate = 220 - age;                  // calculates maximum heart rate
   int min_targetrate = max_heartrate*0.60;        // calculates minimum target heart rate
   int max_tragetrate = max_heartrate*0.70;        // calculates maximum target heart rate

   // if the user input heart rate is within range retun a 1. If not, return 0
   if (heartrate >= min_targetrate && heartrate <= max_tragetrate)
   return 1;
   else
   return 0;
} // end function targetheartrate()


int main()
{
   int age = 1,         // for user input of age. initilize to 1 to pass initial input validation for loop
       heartrate;       // for user input of heart rate

   for (;;)
   {
      cout << "Please enter your age in years: ";
      cin >> age;
      if (age < 0) // if user enters a negative number, stop the program
         break;
      cout << "Please enter the number of heartbeats you count in one minute: ";
      cin >> heartrate;
      cout << endl;

      if (targethearrate(age, heartrate) == 1) // if targetheartrate() returns 1, the user is witin range
         cout << "You are within your target heart rate range." << endl;
      else                                     // if targetheartrate() returns 0, the user i snot within range
         cout << "You are not within your target heart rate range." << endl;
   } // end of target heart rate program

   return 0;
} // end function main()