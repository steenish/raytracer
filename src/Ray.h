#pragma once

#include "Point3.h"
#include "Vector3.h"

// A ray is simply a point and a direction vector.
class Ray {
private:
  Point3 origin;
  Vector3 direction;
public:
  Ray(Point3 o, Vector3 d);
  Point3 getOrigin() { return origin; }
  Vector3 getDirection() { return direction; }
}
