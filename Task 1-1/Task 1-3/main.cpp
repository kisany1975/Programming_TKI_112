#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

/**
* brief Функция для вычисление работы
* param time - время, 20 минут в секундах
* param amperage - сила тока
* param voltage - напряжение
* return значение работы
*/
double getWork(const double time, double amperage, double voltage);

/**
* brief точка входа в программу
* return 0 в случае успеха
*/
int main()
{
    const double time = 1200;
    cout << "Введите силу тока в амперах: ";
    double amperage;
    cin >> amperage;
    cout << "Введите напряжение в волтьтах : ";
    double voltage;
    cin >> voltage;
    const double work = getWork(time, amperage, voltage);
    cout << "Работа совершённая током: " << work << " Дж" << endl;
    return 0;
}

double getWork(const double time, double amperage, double voltage)
{
    return time * amperage * voltage;
}
