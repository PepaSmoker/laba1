#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");

	//пункт 1-----------------------------------------------

	short A;
	int i;
	int num1, num2;
	

	cout << "Bвод А >> ";
	cin >> A;
	cout << "Bвод i >> ";
	cin >> i;

	if (i < 0 || i > 7)
	{
		cout << "Ошибка при вводе бита";
		return 0;
	}

	int bit = (A >> i) & 1;
	
	cout << "A = " << bitset<8>(A) << "\n";
	cout << "bit = " << bit << "\n";

	if (bit != 0)
	{
		cout << "Введите 2 числа >> \n";
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

	// пункт 2----------------------------------------------
	int N;

	cout << "Введите код ошибки >> ";

	cin >> N;

	switch (N)
	{
	case 1:
		cout << "Неисправность ЭБУ впрыска\n";
		break;
	case 2:
		cout << "Неисправность ДУТ\n";
		break;
	case 4:
		cout << "Повышенное напряжение\n";
		break;
	case 8:
		cout << "Пониженное напряжение\n";
		break;
	case 13:
		cout << "Отсутствие сигнала датчика кислорода\n";
		break;
	case 51:
		cout << "Неисправность работы ПЗУ\n";
		break;
	case 52:
		cout << "Неисправность работы ОЗУ\n";
		break;
	case 55:
		cout << "Слишком бедная смесь\n";
		break;
	case 61:
		cout << "Проблемы в работе датчика кислорода \n";
		break;
	default:
		cout << "Некорректный ввод \n";
		break;
	}
}