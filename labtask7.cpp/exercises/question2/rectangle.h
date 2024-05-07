#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
  // Default constructor initializes length and width to 0.0
  Rectangle();

  // Overloaded constructor to initialize length and width
  Rectangle(float length, float width);

  // Destructor (empty for now)
  ~Rectangle();

  // Accessor methods to set length and width
  void SetLength(float length);
  void SetWidth(float width);

  // Accessor methods to get length and width
  float GetLength() const;
  float GetWidth() const;

  // Calculates and returns the area of the rectangle
  float CalculateArea() const;

private:
  float length_; // Private member variable for length
  float width_;  // Private member variable for width
};

#endif // RECTANGLE_H
