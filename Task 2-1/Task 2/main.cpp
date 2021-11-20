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
enum class MATH_OPTIONS
{
    math_perimeter,
    math_square,
    math_lenDiagonal
};

/**
* brief точка входа в программу
* return 0
*/
int res_math()
{
    int answer;
    double width;
    double height;
    double Perimeter;
    double Square;
    double lenDiagonal;


    cout << "Что вы хотите вычислить?" << endl;
    cout << "Периметр - " << static_cast<int>(MATH_OPTIONS::math_perimeter)<< endl;
    cout << "Площадь - " << static_cast<int>(MATH_OPTIONS::math_square) << endl;
    cout << "Длину диагонали - " << static_cast<int>(MATH_OPTIONS::math_lenDiagonal) << endl;;
    cin >> answer;
    
    const auto math_options = static_cast<MATH_OPTIONS>(answer);
    
    
    switch (math_options)
    {
    case MATH_OPTIONS::math_perimeter:
        cout << "Периметр" << endl;
        cin >> width;
        cin >> height;
        Perimeter = (width + height) * 2;
        cout << "Периметр = " << Perimeter << endl;
        break;
    case MATH_OPTIONS::math_square:
        cout << "Площадь" << endl;
        cin >> width;
        cin >> height;
        Square = width * height;
        cout << "Площадь =" << Square << endl;
        break;
    case MATH_OPTIONS::math_lenDiagonal:
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
* \return 0 в случае успеха
*/
int main()
{
    res_math();
    return 0;
}