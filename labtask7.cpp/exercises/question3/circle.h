#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#const double PI = 3.14159; // Define PI

namespace shapes {

class Circle : public Shape {
private:
  double radius;

public:
  // Default constructor
  Circle() : radius(0.0) {}

  // Overloaded constructor
  Circle(double radius);

  // Accessor method
  double getRadius() const { return radius; }

  // Destructor
  ~Circle() override = default;
};

} // namespace shapes

#endif
