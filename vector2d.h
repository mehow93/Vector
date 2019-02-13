#ifndef VECTOR2D_H
#define VECTOR2D_H


class Vector2d
{
public:
    Vector2d(double x, double y);
    double x() const {return x_;}
    double y() const {return y_;}
    double lenght() const;

private:
    const double x_;
    const double y_;

};

Vector2d operator+(const Vector2d v1, const Vector2d &v2);

#endif // VECTOR2D_H
