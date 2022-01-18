#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
/**
 * \brief Рассчитывает значение функции в заданной точке
 * \param x Заданная точка
 * \return Значение функции
 */
double Func(double x);

/**
 * \brief Существует ли точка в заданной точке
 * \param x Заданная точка
 * \return true, если значение функции в заданной точке существует
 */
bool getFunc(double x);

/**
 * \brief Точка входа в программу
 * \return 0 в слчуае успеха
 */
int main()
{
    const double xStart = 1.0;
    const double xFin = 2.1;
    const double step = 0.1;
    double x = xStart;
    while (x <= xFin)
    {
        if (getFunc(x))
        {
            const double y = Func(x);
            cout << "x = " << setw(5) << left << setprecision(5) << x << " y = " << y << "\n";
        }
        else
        {
            cout << "x = " << x << " y = не существует" << "\n";
        }

        x += step;
    }
    return 0;
}

double Func(const double x)
{
    return cos(2.0/x) - 2 * sin(1.0/x) + 1.0/x;
}

bool getFunc(const double x)
{
    return x > 0;
}