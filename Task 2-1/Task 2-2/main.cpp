#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;
/**
* brief Условие для вычисления
* param a - константа
* param x - число вводимое пользователем
* return функции 
*/
double option(const double a,const double x);

/**
* brief Функция для вычисление значения, при x < 2
* param a - константа
* param x - число вводимое пользователем
* return значение функции
*/
double Func1(const double a, const double x);

/**
* brief Функция для вычисление значения, при x >=2
* param a - константа
* param x - число вводимое пользователем
* return значение функции
*/
double Func2(const double a, const double x);

/**
* brief Точка входа в программу
* return 0, в случае успеха
*/
int main()
{
	double x;
	cout << "Введите число: " << endl;
	cin >> x;
	const double a = 2.3;

	cout << option(a, x) << endl;
	return 0;
}

double option(const double a, const double x)
{
	if (x < 2)
	{
		return Func1(a, x);
	}
	else
	{
		return Func2(a, x);
	}
}

double Func1(const double a, const double x)
{
	return 1.5 * pow(cos(x), 2);
}

double Func2(const double a, const double x)
{
	return pow((x - 2), 2) + 6;
}