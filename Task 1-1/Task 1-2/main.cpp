#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
setlocale(LC_ALL, "ru");
using namespace std;

/**
* brief ������ ���� �� ����� � ����� 
* param weight - ���
* return ��� � ������
*/

int main()
{
    cout << "������� ��� � �������: ";
    double weight = 0;
    cin >> weight;
    weight = weight / 28.3;
    cout << "��� � ������ ����������: " << weight << endl;
    return 0;
}