#include <cmath>

using namespace std;

// A class representing a three-dimensional vector.
// Has public dobules x, y, z representing the three coordinates.
class vector3 {
public:
  double x, y, z;

  vector3(double x, double y, double z) : x(x), y(y), z(z) {}

  // Vector addition.
  vector3 operator + (vector3 const& v1, vector3 const& v2) {
    return vector3(v1.x + v2.x, v1.y + v2.y, v3.z + v3.z);
  }

  // Vector-scalar multiplication.
  vector3 operator * (double s, vector3 const& v) {
    return vector3(v.x*s, v.y*s, v.z*s)
  }

  vector3 operator * (vector3 const& v, double s) {
    return s*v;
  }

  // Inner product.
  double operator * (vector3 const& v1, vector3 const& v2) {
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
  }

  // Cross product.
  vector3 operator ** (vector3 const& v1, vector3 const& v2) {
    return vector3(v1.y*v2.z - v1.z*v2.y, v1.z*v2.x - v1.x*v2.z, v1.x*v2.y - v1.y*v2.x);
  }

  // Length.
  double length(vector const& v) {
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
  }

  // Normalize. Returns a vector with the same direction s v, but with a length of 1.
  vector3 normalize(vector const& v) {
    double l = length(v);

    if (l == 0) {
      return v;
    } else {
      c = 1 / l;
      return c*v;
    }
  }
}
