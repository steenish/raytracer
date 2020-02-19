#pragma once

// A class representing a three-dimensional vector.
// Has public const doubles x, y, z representing the three coordinates.
class Vector3 {
public:
  const double x, y, z;

  Vector3(double x, double y, double z);

  double length(vector const& v);
  Vector3 normalize(vector const& v);

  friend Vector3 operator + (Vector3 const& v1, Vector3 const& v2);
  friend Vector3 operator * (double s, Vector3 const& v);
  friend Vector3 operator * (Vector3 const& v, double s);
  friend double operator * (Vector3 const& v1, Vector3 const& v2);
  friend Vector3 operator ** (Vector3 const& v1, Vector3 const& v2);
  friend double operator [] (Vector3 const& v, int i);
}
