#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

/**
* brief ������ ����������� ������
* param time - �����, 20 ����� � ��������
* param amperege - ���� ����
* param voltage - ����������
* param work - ������
* return ����������� ������
*/

int main()
{
    double time = 1200;
    cout << "������� ���� ���� � �������: ";
    double amperage = 0;
    cin >> amperage;
    cout << "������� ���������� � ��������: ";
    double voltage = 0;
    cin >> voltage;
    double work = time * amperage * voltage;
    cout << "������ ����������� �����: " << work << " ��" << endl;
    return 0;
}