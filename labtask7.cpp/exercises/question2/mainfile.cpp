#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
  // Create an instance of Rectangle using the default constructor
  Rectangle rect1;

  // Get user input for length (for rect1)
  cout << "Enter the length of the first rectangle: ";
  float length1;
  cin >> length1;

  // Get user input for width (for rect1)
  cout << "Enter the width of the first rectangle: ";
  float width1;
  cin >> width1;

  // Set length and width of rect1 using accessor methods
  rect1.SetLength(length1);
  rect1.SetWidth(width1);

  // Create another instance of Rectangle using the overloaded constructor
  float length2, width2;
  cout << "Enter the length of the second rectangle: ";
  cin >> length2;
  cout << "Enter the width of the second rectangle: ";
  cin >> width2;
  Rectangle rect2(length2, width2); // Use overloaded constructor

  // Calculate and output the area of both rectangles
  float area1 = rect1.CalculateArea();
  float area2 = rect2.CalculateArea();
  cout << "The area of the first rectangle is: " << area1 << endl;
  cout << "The area of the second rectangle is: " << area2 << endl;

  return 0;
}
