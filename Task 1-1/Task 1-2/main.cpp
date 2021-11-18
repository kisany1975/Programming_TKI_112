#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
setlocale(LC_ALL, "ru");
using namespace std;

/**
* brief Расчёт веса из грамм в унции 
* param weight - вес
* return Вес в унциях
*/

int main()
{
    cout << "Введите вес в граммах: ";
    double weight = 0;
    cin >> weight;
    weight = weight / 28.3;
    cout << "Вес в унциях состовляет: " << weight << endl;
    return 0;
}