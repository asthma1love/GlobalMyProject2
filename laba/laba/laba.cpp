#include <iostream>
#include <conio.h>
#include "fun.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "�����������" << endl;
	cout << "������� ������ ��������" << endl;
	cin >> a;
	cout << "������� ������ ��������" << endl;
	cin >> b;
	system("cls");
	cout << "������� �����:" << endl;
	cout << "1-���������" << endl;
	cout << "2-�������" << endl;
	cout << "3-��������" << endl;
	cout << "4-������" << endl;
	switch (_getch()) {
	case'1': {
		cout << a << " + " << b << " = " << summa(a, b) << endl;
		break;
	}
	case'2': {
		cout << a << " - " << b << " = " << subtraction(a, b) << endl;
		break;
	}
	case'3': {
		cout << a << " * " << b << " = " << multiplication(a, b) << endl;
		break;
	}
	case'4': {
		cout << a << " / " << b << " = " << division(a, b) << endl;
		break;
	}

	default:
		cout << "�������� ����" << endl;
		break;

	}




	system("pause");
	return 0;
}