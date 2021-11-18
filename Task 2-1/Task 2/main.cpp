#include <iostream>
#include <cmath>
using namespace std;

/**
*\brief Варианты выбора для пользователя
* \param math_Perimeter - периметр
* \param math_Square - площадь
* \param math_lenDiagonal - длина диагонали
* \return 0
*/
enum Maths
{
    math_Perimeter = 1,
    math_Square = 2,
    math_lenDiagonal = 3
};

/**
*\brief Поиск значения площади, пермитра, длины диагонали
* \param wight - ширина
* \param height - высота
* \return значение площади, периметра, длины диагонали
*/
void res_math()
{
    int answer;
    double width;
    double height;
    double Perimeter;
    double Square;
    double lenDiagonal;


    cout << "Что вы хотите вычислить? От 1 до 3" << endl;
    cout << "Периметр - 1, Площадь - 2, Длина диагонали - 3" << endl;
    cin >> answer;
    switch (answer)
    {
    case math_Perimeter:
        cout << "Периметр" << endl;
        cin >> width;
        cin >> height;
        Perimeter = (width + height) * 2;
        cout << "Периметор = " << Perimeter << endl;
        break;
    case math_Square:
        cout << "Площадь" << endl;
        cin >> width;
        cin >> height;
        Square = width * height;
        cout << "Площадь =" << Square << endl;
        break;
    case math_lenDiagonal:
        cout << "Диагональ" << endl;
        cin >> width;
        cin >> height;
        lenDiagonal = sqrt(pow(width, 2) + pow(height, 2));
        cout << "Длина диагонали = " << lenDiagonal << endl;
        break;
    default:
        cout << "Нет такой задачи!";
        break;
    }

}
/**
*\brief Возвращение значения res_math
* \return 0, в случае успеха
*/
int main()
{
    res_math();
    return 0;
}