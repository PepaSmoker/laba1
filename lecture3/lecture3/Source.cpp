#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//����� 1----------------------
	int N;
	int id = 0;
	float num;
	float max = -1;
	float sum = 0;

	cout << "������� ���������� ����� >> ";
	cin >> N;

	for (int i = 1; i < N + 1; i++)
	{
		cout << "\n������� num >> ";
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
	cout << "\n����� �����: " << sum << endl;
	cout << "������������ �����: " << max << ", id �����: " << id << "\n\n";

	//����� 2----------------------
	int x;
	int temp;
	int product = 1;

	cout << "����� X >> ";
	cin >> x;

	while (abs(x) > 1000)
	{
		cout << "������ �����.\n������� ����� ��� ��� >> ";
		cin >> x;
	}

	while (x > 0)
	{
		temp = x % 10;
		product *= temp;
		x /= 10;
	}
	cout << "������������ ���� �����: " << product;
}