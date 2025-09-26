#include <iostream>

using namespace std;

int main()
{
	unsigned int a, b; //������ ��� ����� ������������� ��������������� �����
	double c2; //��� ��������� �.�. ������� ����� ���� ����������� �����
	long c; //������ ��� �������� ����� ����� ���� �������������

	cin >> a >> b;

	//�����
	c = a + b;
	cout << c << " ";
	c = a + a;
	cout << c << " ";
	c = b + b;
	cout << c << "\n";
	
	//��������
	c = a - b;
	cout << c << " ";
	c = b - a;
	cout << c << " ";
	c = a - a;
	cout << c << " ";
	c = b - b;
	cout << c << "\n";

	//������������
	c = a * b;
	cout << c << " ";
	c = a * a;
	cout << c << " ";
	c = b * b;
	cout << c << "\n";
	
	//�������
	c2 = (double)a / b;
	cout << c2 << " ";
	c2 = (double)b / a;
	cout << c2 << " ";
	c2 = (double)a / a;
	cout << c2 << " ";
	c2 = (double)b / b;
	cout << c2 << "\n";

	cout << "\nVariables \n";

	cout << "unsigned int: " << sizeof(unsigned int) * 8 << " bit\n";
	cout << "min = 0, max = " << (pow(2, sizeof(unsigned int) * 8) - 1) << "\n";

	cout << "double: " << sizeof(double) * 8 << " bit\n";
	cout << "min = " << -(2.0 - pow(2.0, -52)) * pow(2.0, 1023) << ", max = " << (2.0 - pow(2.0, -52)) * pow(2.0, 1023) << "\n";

	cout << "long: " << sizeof(long) * 8 << " bit\n";
	cout << "min = " << -pow(2, sizeof(long) * 8 - 1) << ", max = " << pow(2, sizeof(long) * 8 - 1);
}