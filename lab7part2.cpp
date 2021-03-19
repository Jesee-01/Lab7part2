// Lab 4 testNum.cpp
// This program checks to see if a test score is equal to 100. 
// It no longer contains a logic error. 
// Aramis Artiga
#include <iostream>
using namespace std;

int main()
{
   int score;  // Initialize student's test score
   cout << "Enter score: "; // Tells student to input score
   cin >> score; // Stores code
   
   if (score == 100){ // First if statement with "equals to"
      cout << "You made a perfect score.\n"; // This displays if score matches
   }
   
   // Else if statement from now on b/c we already did first if statement
   else if (score >= 90){ // Restriction where score msut be 90 or higher
      cout << "A\n"; //Displays letter grade
      
   }
   
   else if (score >= 80){  // Restriction where score msut be 80-89
      cout << "B\n"; // Displays letter grade
      cout << "You need " << 90 - score 
           << " more point till next leter grade ";
      //Calculates entered points till next letter grade
   }
   
   else if (score >= 70){ // Restriction where score msut be 70 -79
      cout << "C\n"; // Displays letter grade
      cout << "You need " << 80 - score 
           << " more point till next leter grade ";
      //Calculates entered points till next letter grade
   }
   
   else if (score >= 60){// Restriction where score msut be 60-69
      cout << "D\n"; // Displays letter grade
      cout << "You need " << 70 - score 
           << " more point till next leter grade ";
      //Calculates entered points till next letter grade
   }
   
   else if (score < 60){// Restriction where score must be 59 or lower
      cout << "F\n"; // Displays letter grade
      cout << "You need " << 60 - score 
           << " more point till next leter grade ";
      //Calculates entered points till next letter grade
   }
   
   
   
    
   return 0;
}
