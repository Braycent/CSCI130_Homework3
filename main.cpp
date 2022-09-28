//*************************************General Math*************************************//
// Write a C++ program to calculate and display the value of the slope of the line connecting two points with the coordinates (3,7) and (8,12). Use the fact that the slope between two points with the coordinates (x1,y1) and (x2,y2) is (y2 - y1) / (x2 - x1).//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  cout << "The formula for calulating slope is \n     (y2 - y1)/(x2 - x1)" << endl;
  cout << "Note:\n The coordinates (3,7), (8,12) are formatted (x1,y1), (x2,y2) or (x2,y2), (x1,y1)" << endl;

  //establish variables
 int x, y, g, f;
  
  cout << "\nInput x1" << endl;
  cin >> x;
  cout << "\nInput y1" << endl;
  cin >> y;
  cout << "\nInput x2" << endl;
  cin >> g;
  cout << "\nInput y2" << endl;
  cin >> f;

  //calculate slope
  cout << "We will now calculate slope using the formula: (y2-y1)/(x2-x1)" << endl;
  cout << "= " << (f - y)/(g-x);

  
  
  
}