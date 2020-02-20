#include <cmath>
#include "Vector3.h"

using namespace std;

// Constructor.
Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z) {}

// Length.
double Vector3::length(vector const& v) {
  return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

// Normalize. Returns a vector with the same direction s v, but with a length of 1.
Vector3 Vector3::normalize(vector const& v) {
  double l = length(v);

  if (l == 0) {
    return v;
  } else {
    c = 1 / l;
    return c*v;
  }
}

// Vector addition.
Vector3 operator + (Vector3 const& v1, Vector3 const& v2) {
  return Vector3(v1.x + v2.x, v1.y + v2.y, v3.z + v3.z);
}

// Vector-scalar multiplication.
Vector3 operator * (double s, Vector3 const& v) {
  return Vector3(v.x*s, v.y*s, v.z*s)
}

Vector3 operator * (Vector3 const& v, double s) {
  return s*v;
}

// Inner product.
double operator * (Vector3 const& v1, Vector3 const& v2) {
  return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

// Cross product.
Vector3 operator ** (Vector3 const& v1, Vector3 const& v2) {
  return Vector3(v1.y*v2.z - v1.z*v2.y, v1.z*v2.x - v1.x*v2.z, v1.x*v2.y - v1.y*v2.x);
}

// Indexing.
double operator [] (Vector3 const& v, int i) {
  switch (i) {
    case 0:
    return v.x;
    case 1:
    return v.y;
    case 2:
    return v.z;
    default:
    return nan("");
  }
}
