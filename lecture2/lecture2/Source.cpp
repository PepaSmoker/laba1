#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");

	//����� 1-----------------------------------------------

	short A;
	int i;
	int num1, num2;
	

	cout << "B��� � >> ";
	cin >> A;
	cout << "B��� i >> ";
	cin >> i;

	if (i < 0 || i > 7)
	{
		cout << "������ ��� ����� ����";
		return 0;
	}

	int bit = (A >> i) & 1;
	
	cout << "A = " << bitset<8>(A) << "\n";
	cout << "bit = " << bit << "\n";

	if (bit != 0)
	{
		cout << "������� 2 ����� >> \n";
		cin >> num1 >> num2;

		if (num1 % num2 == 0)
		{
			cout << (num1 / num2) << "\n";
		}
		else if (num2 % num1 == 0)
		{
			cout << (num2 / num1) << "\n";
		}
		else
		{
			cout << (num1 * num2) << "\n";
		}
	}
	else
	{
		if (i != 0 && i != 7)
		{
			
			A ^= (1 << i + 1);
			A ^= (1 << i - 1);
			cout << "A = " << bitset<8>(A) << "\n";
		}
		else if (i == 0)
		{
			A ^= (1 << i + 1);
			cout << "A = " << bitset<8>(A) << "\n";
		}
		else if (i == 7)
		{
			A ^= (1 << i - 1);
			cout << "A = " << bitset<8>(A) << "\n";
		}
	}

	// ����� 2----------------------------------------------
	int N;

	cout << "������� ��� ������ >> ";

	cin >> N;

	switch (N)
	{
	case 1:
		cout << "������������� ��� �������\n";
		break;
	case 2:
		cout << "������������� ���\n";
		break;
	case 4:
		cout << "���������� ����������\n";
		break;
	case 8:
		cout << "���������� ����������\n";
		break;
	case 13:
		cout << "���������� ������� ������� ���������\n";
		break;
	case 51:
		cout << "������������� ������ ���\n";
		break;
	case 52:
		cout << "������������� ������ ���\n";
		break;
	case 55:
		cout << "������� ������ �����\n";
		break;
	case 61:
		cout << "�������� � ������ ������� ��������� \n";
		break;
	default:
		cout << "������������ ���� \n";
		break;
	}
}