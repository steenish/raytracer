#pragma once

#include "Vector3.h"

// A class representing a three-dimensional vector.
// Has public const doubles x, y, z representing the three coordinates.
class Point3 {
public:
  const double x, y, z;

  Point3(double x, double y, double z);

  friend Vector3 operator - (Point const& p1, Point const& p2);
}
