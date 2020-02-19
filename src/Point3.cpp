#include "Point3.h"

Point3::Point3(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3 operator - (Point const& p1, Point const& p2) {
  return Vector3(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
}
