#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

void Lab3(int variant)
{
	int ui;
	float pi = M_PI;
	float y, x, a, b, t;


	if (variant == 1) {
		cout << "======================== Вариант #1 ========================\n" << endl;
		y = 0;
		for (ui = 1; ui <= 3; ui++)
		{
			if (ui == 1) {
				a = 2.01;
			}
			else if (ui == 2) {
				a = 3.5;
			}
			else if (ui == 3) {
				a = 5.8;
			}

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 1; x <= 15; x++)
			{
				y = 0.5 * x * pow((1 + a * x), 0.2);
				cout << "Y = " << y << "\t\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 2) {
		cout << "======================== Вариант #2 ========================\n" << endl;
		y = 0; b = 1.3;
		for (ui = 1; ui <= 3; ui++)
		{
			if (ui == 1) {
				a = 0.325;
			}
			else if (ui == 2) {
				a = 0.4;
			}
			else if (ui == 3) {
				a = 0.425;
			}

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 0.1; x <= 2.0; x = x + 0.3)
			{
				y = pow((b / a), x) * pow(cos(x / a), 2);
				cout << "Y = " << y << "\t\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 3) {
		cout << "======================== Вариант #3 ========================\n" << endl;
		y = 0; ui = 0;
		for (a = 0.3; a <= 0.61; a = a + 0.1)
		{
			ui++;
			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 0.75; x <= 1.1; x = x + 0.05)
			{
				y = log(pow(a, 2) / (1 - a)) + cos(a + x);
				cout << "Y = " << y << "\t\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 4) {
		cout << "======================== Вариант #4 ========================\n" << endl;
		y = 0; ui = 0;
		for (a = 0.125; a <= 0.525; a = a + 0.2)
		{
			ui++;

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 0.25; x <= 1.75; x = x + 0.5)
			{
				y = (log(a * x) / log(x + 1)) + sqrt(a + x);
				cout << "Y = " << y << "\t\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 5) {
		cout << "======================== Вариант #5 ========================\n" << endl;
		y = 0; b = 0.05;
		for (ui = 1; ui <= 3; ui++)
		{
			if (ui == 1) {
				a = 0.3;
			}
			else if (ui == 2) {
				a = 0.05;
			}
			else if (ui == 3) {
				a = 0.015;
			}

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 7.5; x <= 12; x = x + 0.5)
			{
				y = x * log((2 * x) / (b)) * pow(cos(a), 2);
				cout << "Y = " << y << "\t\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 6) {
		cout << "======================== Вариант #6 ========================\n" << endl;
		y = 0; ui = 0;
		for (a = 1; a <= 4; a++)
		{
			ui++;

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 0.1; x <= 0.251; x = x + 0.01)
			{
				y = sin(a * x) + 3 * pow(cos(a * pow(x, 2)), 2);
				cout << "Y = " << y << "\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 7) {
		cout << "======================== Вариант #7 ========================\n" << endl;
		y = 0; ui = 0;
		for (a = 2; a <= 11; a = a + 3)
		{
			ui++;

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 1; x <= 4.6; x = x + 0.4)
			{
				y = 0.24 * log(a * x) + a * pow(log(x), 2);
				cout << "Y = " << y << "\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
	else if (variant == 8) {
		cout << "======================== Вариант #8 ========================\n" << endl;
		y = 0;
		for (ui = 1; ui <= 3; ui++)
		{
			if (ui == 1) {
				a = 1;
			}
			else if (ui == 2) {
				a = 1;
			}
			else if (ui == 3) {
				a = 1;
			}

			cout << "Параметр А = " << a << "\t\t" << "Таблица " << ui << endl;

			for (x = 0.1; x <= 1.9; x = x + 0.4)
			{
				y = log(a * pow(x, 3) + b) / exp(x + 1);
				cout << "Y = " << y << "\t\t\t" << "X = " << x << endl;
			}
			cout << endl;
		}
		cout << "\n============================================================" << endl;
	}
}