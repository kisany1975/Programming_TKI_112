#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

/**
* brief Функция для вычисления значения A
* param x параметр x
* param y параметр y
* param z параметр z
* return значение A
*/
double getA(const double x, const double y, const double z);

/**
* brief Функция для вычисления значения B
* param x параметр x
* param y параметр y
* param z параметр z
* return значение B
*/
double getB(const double x, const double y, const double z);


/**
* brief Точка входа в программу
* return 0 в случае успеха
*/
int main()
{
    const double x = -2.9;
    const double y = 15.5;
    const double z = 1.5;
    double a = getA(x, y, z);
    double b = getB(x, y, z);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

double getA(const double x, const double y, const double z)
{
    return sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin(x + y / x), 3);
}

double getB(const double x, const double y, const double z)
{
    return cos(pow(x, 3)) * cos(pow(x, 3)) - x / sqrt(pow(x, 2) + pow(y, 2));
}
