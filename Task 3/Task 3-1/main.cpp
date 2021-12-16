#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
* \brief вычисление значения функции
* \param x значение переменной x
* \return значение функции
*/
double func(const double x);

/*
* \brief выполняет функцию
* \param x значение переменной x
* \return 1, в случае успеха
*/
double NoSol(const double x);

/*
* \brief точка входа в программу
* \return 0, в случае успеха
*/
int main() 
{
  cout << fixed << setprecision(5);
  double x = 1;
  const auto edge = 2;
  const auto step = 0.10;

  for (x; x <= edge; x += step)
  {
    if (NoSol(x))
    {
      cout << "Нет решений" << endl;
    }
    cout << "x = " << x << " " << "y = " << NoSol(x) << " " << "\n";
  }
    
  return 0;
}

double func(const double x) 
{
  return cos(2.0/x) - 2*sin(1.0/x) + 1.0/x;
}

double NoSol(const double x)
{
  return (1/cos(2.0/x) - 2*sin(1.0/x) + 1.0/x);
}