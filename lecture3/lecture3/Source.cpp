#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//пункт 1----------------------
	int N;
	int id = 0;
	float num;
	float max = -1;
	float sum = 0;

	cout << "Введите количество чисел >> ";
	cin >> N;

	for (int i = 1; i < N + 1; i++)
	{
		cout << "\nВведите num >> ";
		cin >> num;

		if (-0.36 < num && num <= 10.1)
		{
			sum += num;
			if (num > max)
			{
				max = num;
				id = i;
			}
		}
	}
	cout << "\nСумма чисел: " << sum << endl;
	cout << "Максимальное число: " << max << ", id числа: " << id << "\n\n";

	//пункт 2----------------------
	int x;
	int temp;
	int product = 1;

	cout << "Введи X >> ";
	cin >> x;

	while (abs(x) > 1000)
	{
		cout << "Ошибка ввода.\nВведите число ещё раз >> ";
		cin >> x;
	}

	while (x > 0)
	{
		temp = x % 10;
		product *= temp;
		x /= 10;
	}
	cout << "Произведение цифр числа: " << product;
}