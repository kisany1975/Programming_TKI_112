#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;
/**
* brief ������� ��� ����������
* param a - ���������
* param x - ����� �������� �������������
* return ������� 
*/
double option(const double a,const double x);

/**
* brief ������� ��� ���������� ��������, ��� x < 2
* param a - ���������
* param x - ����� �������� �������������
* return �������� �������
*/
double Func1(const double a, const double x);

/**
* brief ������� ��� ���������� ��������, ��� x >=2
* param a - ���������
* param x - ����� �������� �������������
* return �������� �������
*/
double Func2(const double a, const double x);

/**
* brief ����� ����� � ���������
* return 0, � ������ ������
*/
int main()
{
	double x;
	cout << "������� �����: " << endl;
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