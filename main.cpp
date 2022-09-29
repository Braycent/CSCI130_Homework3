//****************************General Math(PG. 173, Pr.1, CH.3)*******************************//
// Write a C++ program to calculate and display the value of the slope of the line connecting two points with the coordinates (3,7) and (8,12). Use the fact that the slope between two points with the coordinates (x1,y1) and (x2,y2) is (y2 - y1) / (x2 - x1).//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {

  cout << "The formula for calulating slope is \n     (y2 - y1)/(x2 - x1)" << endl;
  cout << "Note:\n The coordinates (2,10), (12,6) are formatted (x1,y1), (x2,y2) or (x2,y2), (x1,y1)" << endl;

  //establish variables
 double  x, y, g, f;
  x = 2;
  g = 12;
  y = 10;
  f = 6;

  //calculate slope
  cout << "We will now calculate slope between the two points using the formula: (y2-y1)/(x2-x1)" << endl;
  cout << " The value of the slope equals "  << fixed << setw(7) << setprecision(2) << (f - y)/(g-x);

  // Part b) I know the value output from the code is true to the actual value of slope because using the formula (y2-y1)/(x2-x1), we get (12-7)/(8-3) = 5/5 = 1.
  
  
}