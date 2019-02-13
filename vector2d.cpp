#include "vector2d.h"
#include <math.h>
//Vector2d::Vector2d(double x, double y)
//{
//   x_ = x;
//   y_ = y;
//}

Vector2d::Vector2d(double x, double y) : x_{x}, y_{y} {} // puste cialo funkcji

double Vector2d::lenght() const
{
  return sqrt(x_*x_ + y_*y_);
}

Vector2d operator+(const Vector2d &v1, const Vector2d &v2){
 double new_x = v1.x() + v2.x();
 double new_y = v1.y() + v2.y();
    Vector2d final(new_x, new_y);

    return final;

}
