#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

/**
* brief Расчёт совершённой работы
* param time - время, 20 минут в секундах
* param amperege - сила тока
* param voltage - напряжение
* param work - работа
* return Совершённая работа
*/

int main()
{
    double time = 1200;
    cout << "Введите силу тока в амперах: ";
    double amperage = 0;
    cin >> amperage;
    cout << "Введите напряжение в волтьтах: ";
    double voltage = 0;
    cin >> voltage;
    double work = time * amperage * voltage;
    cout << "Работа совершённая током: " << work << " Дж" << endl;
    return 0;
}