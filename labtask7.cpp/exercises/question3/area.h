#ifndef AREA_H
#define AREA_H

namespace shapes {

class Area {
public:
  static double calculateArea(const Square& square);
  static double calculateArea(const Triangle& triangle);
  static double calculateArea(const Circle& circle);
};

} // namespace shapes

#endif
