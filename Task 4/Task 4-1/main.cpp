#include <iostream>
#include <random> 
#include <cmath> 
using namespace std;

void FillArrayKeyboard(int* array, const size_t n);

void FillArrayRandom(int* array, const size_t n, const int min, const int max);

void ReplaceElement(int* array, const size_t n, int k);

int SearchInd(const int* array,const size_t n);



enum class Method
{
	KEYBOARD,
	RANDOM

};

int main()
{
	setlocale(LC_ALL, "rus");
	size_t n, key;
	int size;

	cout << "Введите размер массива:" << endl;
	cin >> size;

	while (size < 1)
	{
		cout << "Размер не может быть отрицательным, введите размер ещё раз:" << endl;
		cin >> size;
	}

	n = size;
	int* array = new int[n];

	do
	{
		cout << "Заполнить массив: " << "\nС клавиаутры - " << static_cast<int>(Method::KEYBOARD) << "\nСлучайными числами - " << static_cast<int>(Method::RANDOM) << "\nВведите опцию: " << endl;;
		cin >> key;
	} while (key != static_cast<int>(Method::KEYBOARD) && key != static_cast<int>(Method::RANDOM));

	const int left = -100;
	const int right = 100;

	if (key == static_cast<int>(Method::KEYBOARD))
	{
		FillArrayKeyboard(array, n);
	}
	else
	{
		FillArrayRandom(array, n, left, right);
	}

	for (size_t i = 0; i < n; i++)
		cout << "array[" << i << "]: " << array[i] << endl;
	cout << endl;
	
	int k;
	cout << "Введите k: " << endl;
	cin >> k;
	cout << "Изменённый массив: " << endl;
	ReplaceElement(array, n, k);

	cout << "Индексы элемнтов кратных 3: " << endl;
	SearchInd(array, n);

	if (array != nullptr)
	{
		delete[] array;
		array = nullptr;
	}

	return 0;
}

void FillArrayKeyboard(int* array, const size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << "array[" << i << "]: " << array[i];
		cin >> array[i];
	}
	cout << endl;
}

void FillArrayRandom(int* array, const size_t n, const int min, const int max)
{
	random_device rd;
	mt19937 gen(rd());
	const uniform_int_distribution<int> dist(min, max);

	for (size_t i = 0; i < n; i++)
		array[i] = dist(gen);
}

void ReplaceElement(int* array, const size_t n, int k)
{
	for (size_t i = n - k; i < n; i++)
	{
		array[i] = -1 * array[i];
	}
	for (size_t i = 0; i < n; i++)
		cout << "array[" << i << "]: " << array[i] << endl;
}

int SearchInd(const int* array, const size_t n)
{
	for (size_t i = 0; i < n; i++)
		if (array[i] % 3 == 0)
			cout << "Индекс = " << "["<< i <<"]" << endl;
	return 0;
}
