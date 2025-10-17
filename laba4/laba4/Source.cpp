#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	// пункт 1------------

	/*const int n = 6;
	int arr[n];
	bool check = false;

	cout << "Введите числа для массива >> ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] == arr[i])
		{
			cout << "";
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						swap(arr[j], arr[j + 1]);
					}
				}
			}
		}
	}

	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}*/

	//пункт 2------------

	
	int matrix[3][4];
	int arr_sum[3];
	int sum = 0;

	cout << "Введите элементы матрицы >> ";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matrix[i][j];
			sum += abs(matrix[i][j]);
		}
		arr_sum[i] = sum;
		sum = 0;
	}
	
	int max_sum = arr_sum[0];
	int max_index = 0;
	for (int i = 1; i < 3; i++)
	{
		if (arr_sum[i] > max_sum)
		{
			max_sum = arr_sum[i];
			max_index = i;
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		matrix[max_index][i] = 0;
	}

	cout << "\nМатрица: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}