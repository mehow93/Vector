 #include <iostream>

using namespace std;
#include "vector2d.h"
int main()
{

    Vector2d v1(1,2);
    Vector2d v2(2,3);
    Vector2d v3();
    v3 = v1 + v2;
    cout<< "v1.x = " <<v1.x() << ", v1.y = " <<v1.y() <<endl;
    cout<< "v2.x = " <<v2.x() << ", v2.y = " <<v2.y() <<endl;
    return 0;
}
