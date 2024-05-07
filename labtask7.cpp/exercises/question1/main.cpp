#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
  Rectangle rect; // Create an instance of Rectangle

  // Get user input for length
  cout << "Enter the length of the rectangle: ";
  float length;
  cin >> length;

  // Get user input for width
  cout << "Enter the width of the rectangle: ";
  float width;
  cin >> width;

  // Set length and width using accessor methods
  rect.SetLength(length);
  rect.SetWidth(width);

  // Calculate and output the area
  float area = rect.CalculateArea();
  cout << "The area of the rectangle is: " << area << endl;

  return 0;
}
