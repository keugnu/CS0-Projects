// Lab 4 Exercise 2
// History grading project
//
// Program by: Stephen-Michael Brooks

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

   // create letter grade brackets
   const char GRADE_A = 'A';
   const char GRADE_B = 'B';
   const char GRADE_C = 'C';
   const char GRADE_D = 'D';
   const char GRADE_F = 'F';

   // create variables for user input of grades
   double test1, test2, test3;

   // ask user to input grades for 3 tests
   cout << "Please input score for test 1: ";
   cin >> test1;
   cout << "Please input score for test 2: ";
   cin >> test2;
   cout << "Please input score for test 3: ";
   cin >> test3;

   // print scores
   cout << "First test: " << setw(5) << test1 << endl;
   cout << "Second test: " << setw(4) << test2 << endl;
   cout << "Third test: " << setw(5) << test3 << endl;

   // create variables for adding tests after dropping
   double drop1sum = test2 + test3, drop2sum = test1 + test3;
   // begin if statement to drop lowest score
   if (test1 < test2)
   {
      cout << "After dropping test 1 your points earned are: " << drop1sum << endl;
      if (drop1sum >= 92)
         cout << "Your grade is " << GRADE_A << endl;
      else if (drop1sum >= 82)
         cout << "Your grade is " << GRADE_B << endl;
      else if (drop1sum >= 72)
         cout << "Your grade is " << GRADE_C << endl;
      else if (drop1sum >= 62)
         cout << "Your grade is " << GRADE_D << endl;
      else if (drop1sum < 62)
         cout << "Your grade is " << GRADE_F << endl;
   }
   
   else
   {
      cout << "After dropping test 2 your points earned are: " << drop2sum << endl;
      if (drop2sum >= 92)
         cout << "Your grade is " << GRADE_A << endl;
      else if (drop2sum >= 82)
         cout << "Your grade is " << GRADE_B << endl;
      else if (drop2sum >= 72)
         cout << "Your grade is " << GRADE_C << endl;
      else if (drop2sum >= 62)
         cout << "Your grade is " << GRADE_D << endl;
      else if (drop2sum < 62)
         cout << "Your grade is " << GRADE_F << endl;
   }
   return 0;
} // end function main()