#include <iostream>
#include <conio.h>
#include "fun.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Калькулятор" << endl;
	cout << "Введите первое значение" << endl;
	cin >> a;
	cout << "Введите второе значение" << endl;
	cin >> b;
	system("cls");
	cout << "Введите цифру:" << endl;
	cout << "1-Сложенить" << endl;
	cout << "2-Вычесть" << endl;
	cout << "3-Умножить" << endl;
	cout << "4-Делить" << endl;
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
		cout << "Неверный ввод" << endl;
		break;

	}




	system("pause");
	return 0;
}