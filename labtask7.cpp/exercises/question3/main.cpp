#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;
using namespace shapes;

int main() {
  char choice;

  do {
    cout << "\n** Area Calculator **\n";
    cout << "1. Calculate area of Square\n";
    cout << "2. Calculate area of Triangle\n";
