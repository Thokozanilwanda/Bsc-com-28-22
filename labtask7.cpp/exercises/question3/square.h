#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

namespace shapes {

class Square : public Shape {
private:
  double sideLength;

public:
  // Default constructor
  Square() : sideLength(0.0) {}

  // Overloaded constructor
  Square(double sideLength);

  // Accessor method
  double getSideLength() const { return sideLength; }

  // Destructor
  ~Square() override = default;
};

} // namespace shapes

#endif
