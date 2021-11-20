#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
/**
* brief Функция перевода веса из граммов в унции
* param weight - вес
* param ounce  - унции
* return вес из граммов в унции
*/
double getWeight(double weight, double ounce);

/**
* brief точка входа в программу
* return 0 в случае успеха
*/
int main()
{
    cout << "Введите вес в граммах = ";
    double gram_weight;
    const double ounce = 28.3;
    cin >> gram_weight;
    cout << "Вес в унциях состовляет = " << getWeight(gram_weight, ounce) << endl;
    return 0;
}

double getWeight(const double weight, const double ounce)
{
    return weight / ounce;
}




