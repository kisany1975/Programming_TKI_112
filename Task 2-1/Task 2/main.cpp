#include <iostream>
#include <cmath>
using namespace std;

/**
* brief Функция для вычисление периметра
* param height - высота
* param wight - ширина
* return значение периметра
*/
double getPerimeter(double height, double width);

/**
* brief Функция для вычисление площади
* param height - высота
* param wight - ширина
* return значение площади
*/
double getSquare(double height, double width);

/**
* brief Функция для вычисление длины диагонали
* param height - высота
* param wight - ширина
* return значение длины диагонали
*/
double getLenDiagonal(double height, double width);

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
    cout << "Что вы хотите вычислить?" << endl;
    cout << "Периметр - " << static_cast<int>(MATH_OPTIONS::math_perimeter)<< endl;
    cout << "Площадь - " << static_cast<int>(MATH_OPTIONS::math_square) << endl;
    cout << "Длину диагонали - " << static_cast<int>(MATH_OPTIONS::math_lenDiagonal) << endl;;
    int answer = 0;
    cin >> answer;
    
    const auto math_options = static_cast<MATH_OPTIONS>(answer);
    
    
    double wight = 0;
    double height = 0;
    switch (math_options)
    {
    case MATH_OPTIONS::math_perimeter:
        cout << "Периметр" << endl;
        cin >> width;
        cin >> height;
        cout << "Периметр = " << getPerimeter(height, width) << endl;
        break;
    case MATH_OPTIONS::math_square:
        cout << "Площадь" << endl;
        cin >> width;
        cin >> height;
        cout << "Площадь =" << getSquare(height, width) << endl;
        break;
    case MATH_OPTIONS::math_lenDiagonal:
        cout << "Диагональ" << endl;
        cin >> width;
        cin >> height;
        cout << "Длина диагонали = " << getLenDiagonal(height, width) << endl;
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

double getPereimeter(const double height,const double width)
{
    return (width + height) * 2;
}

double getSquare(const double height,const double width)
{
    return width * height;
}

double getLenDiagonal(const double height,const double width)
{
    return sqrt(pow(width, 2) + pow(height, 2));
}


