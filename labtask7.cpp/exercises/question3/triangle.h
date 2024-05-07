#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

namespace shapes {

class Triangle : public Shape {
private:
  double base;
  double height;

public:
  // Default constructor
  Triangle() : base(0.0), height(0.0) {}

  // Overloaded constructor
  Triangle(double base, double height);

  // Accessor methods
  double getBase() const { return base; }
  double getHeight() const { return height; }

  // Destructor
  ~Triangle() override = default;
};

} // namespace shapes

#endif
