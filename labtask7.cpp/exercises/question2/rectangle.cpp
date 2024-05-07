#include "Rectangle.h"

Rectangle::Rectangle() {
  length_ = 0.0f;
  width_ = 0.0f;
}

Rectangle::Rectangle(float length, float width) : length_(length), width_(width) {}

Rectangle::~Rectangle() {}

void Rectangle::SetLength(float length) {
  length_ = length;
}

void Rectangle::SetWidth(float width) {
  width_ = width;
}

float Rectangle::GetLength() const {
  return length_;
}

float Rectangle::GetWidth() const {
  return width_;
}

float Rectangle::CalculateArea() const {
  return length_ * width_;
}
