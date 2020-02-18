#include <cmath>
using namespace std;

#ifndef VECTOR3_H
#define VECTOR3_H

class vector3 {
public:
  double x, y, z;

  vector3(double x, double y, double z);

  double length(vector const& v);
  vector3 normalize(vector const& v);

  friend vector3 operator + (vector3 const& v1, vector3 const& v2);
  friend vector3 operator * (double s, vector3 const& v);
  friend vector3 operator * (vector3 const& v, double s);
  friend double operator * (vector3 const& v1, vector3 const& v2);
  friend vector3 operator ** (vector3 const& v1, vector3 const& v2);
}

vector3 operator + (vector3 const& v1, vector3 const& v2);
vector3 operator * (double s, vector3 const& v);
vector3 operator * (vector3 const& v, double s);
double operator * (vector3 const& v1, vector3 const& v2);
vector3 operator ** (vector3 const& v1, vector3 const& v2);

#endif
