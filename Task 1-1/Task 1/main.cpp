#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


/**
*\brief Поиск значения a и b
* param x параметр x
* param y параметр y
* param z параметр z
* return значения a и b
*/
int main()
{
    const double x = -2.9;
    const double y = 15.5;
    const double z = 1.5;
    double a = sqrt(x * x + y) - y * y * sin(x + z / x) * sin(x + z / x) * sin(x + z / x);
    double b = cos(x * x * x) * cos(x * x * x) - x / sqrt(z * z + y * y);
    cout << a << endl;
    cout << b;
    return 0;
}
