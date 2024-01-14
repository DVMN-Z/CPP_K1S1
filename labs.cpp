﻿#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


#pragma warning(disable : 4996)

using namespace std;

void lab2()
{
	cout << "Лабараторная #2\nПРОГРАММИРОВАНИЕ ЛИНЕЙНЫХ АЛГОРИТМОВ" << endl;
	cout << "Задание: Написать программу на языке С++ для расчета значений заданной функции.\nФункцию выбирать в соответствии с вариантом" << endl;
	cout << "========================================================================\n" << endl;

	double b, x = 1.5, a = 2.5;

	b = exp(-a * x) * cos(a * x) + cbrt(fabs(x - a));
	cout << "Результат формулы: b = " << b << endl;

	cout << "\n========================================================================" << endl;
}



void lab3()
{
	cout << "Лабараторная #3\nПРОГРАММИРОВАНИЕ ЦИКЛИЧЕСКИХ АЛГОРИТМОВ" << endl;
	cout << "Задание: Написать программу на языке С++ для расчета таблицы значений заданной функции" << endl;
	cout << "========================================================================\n" << endl;

	string answer;
	double x = 0.5, y, c;
	int cn = 1;
	cout << "Напишите вариант ответа\nВыберите вариант выполнение программы (for/while/do_while): ";
	cin >> answer;
	cout << endl;
	if (answer == "for") {
		for (y = 1; y <= 8; y = y + 0.5)
		{
			c = pow(2, x + y);
			cout << "Результат цикла #" << cn << ". C = " << c << endl;
			cn++;
		}
	}
	else if (answer == "while") {
		y = 1;
		while (y <= 8)
		{
			c = pow(2, x + y);
			cout << "Результат цикла #" << cn << ". C = " << c << endl;
			cn++;
			y = y + 0.5;
		}
	}
	else if (answer == "do_while") {
		y = 1;
		do {
			c = pow(2, x + y);
			cout << "Результат цикла #" << cn << ". C = " << c << endl;
			cn++;
			y = y + 0.5;
		} while (y <= 8);
	}

	cout << "\n========================================================================" << endl;
}



void lab4()
{
	cout << "Лабараторная #4\nРАСЧЕТ ЗНАЧЕНИЙ ФУНКЦИИ ДВУХ ПЕРЕМЕННЫХ." << endl;
	cout << "Задание: В соответствии с индивидуальным заданием таблицы 3 к лабораторной работе\nсоставить схему алгоритма и написать программу на языке С++ для расчета\nнескольких таблиц значений функции." << endl;
	cout << "========================================================================\n" << endl;

	double y, a, x;
	int tbl = 1;

	for (a = 0.125; a <= 0.525; a = a + 0.200)
	{
		cout << "\tТаблица #" << tbl << "\t\t\tПараметр А = " << a << endl;
		for (x = 0.25; x <= 1.75; x = x + 0.5)
		{
			y = (log(a * x) / log(x + 1)) + sqrt(a + x);
			cout << "\tX = " << x << "\t\t\tY = " << y << endl;
		}
		tbl++;
	}

	cout << "\n========================================================================" << endl;
}



void lab5()
{
	cout << "Лабараторная #5\nСОЗДАНИЕ ДИАЛОГОВЫХ ПРОГРАММ" << endl;
	cout << "Задание: В соответствии с вариантом задания разработать программу на языке С++ для\nобработки последовательности чисел, вводимой с клавиатуры." << endl;
	cout << "========================================================================\n" << endl;

	string ans;
	
	cout << "Вы хотите вводить кол-во вводимых чисел? (Y/N) ";
	cin >> ans;
	if (ans == "Y" || ans == "y") {

		int num, cn_o = 0;
		double inp_fr, sr, sum = 0;

		printf("\nВведите кол-во вводимых чисел: ");
		scanf("%d", &num);	

		for (int cn = 1; cn <= num; cn++)
		{
			printf("Введите число: ");
			scanf("%e", &inp_fr);
			
			if (inp_fr < 0) {
				sum = sum + inp_fr;
				cn_o++;
			}
		}
		sr = sum / cn_o;
		cout << "Среднее арифметическое отрицательных чисел = " << sr << endl;

	}
	else if (ans == "N" || ans == "n") {
		string ansp = "Y";
		int cn_o = 0, off = 0;
		double inp_fr, sr, sum = 0;
		
		while (ansp != "N" && ansp != "n")
		{
			printf("Введите число: ");
			scanf("%e", &inp_fr);

			if (inp_fr < 0) {
				sum = sum + inp_fr;
				cn_o++;
			}

			cout << "Хотите продолжить? (Y/N) ";
			cin >> ansp;
			if (ansp != "Y" && ansp != "y" && ansp != "N" && ansp != "n") {
				cout << "Неправильно дан ответ. Остановка..." << endl;
				off = 1;
				break;
			}
		}

		if (off != 1) {
			sr = sum / cn_o;
			cout << "Среднее арифметическое отрицательных чисел = " << sr << endl;
		}
	}
	else { cout << "\nВы ввели неправильный ответ.\nПерезапустите, если хотите начать снова" << endl; }

	cout << "\n========================================================================" << endl;
}



void lab6()
{
	cout << "Лабараторная #6\nФОРМИРОВАНИЕ И ОБРАБОТКА ОДНОМЕРНЫХ МАССИВОВ" << endl;
	cout << "Задание: Массив А[20] нецелых элементов вводят с клавиатуры.\nОпределить среднее арифметическое положительных элементов массива и посчитать сколько элементов находится в интервале от 2,5 до 3,5. " << endl;
	cout << "========================================================================\n" << endl;

	double sr, a[20], sum = 0;
	int coun = 0, cn_p = 0;

	for (int i = 0; i < 20; i++) {
		cout << "Введите индекс " << i << " : ";
		cin >> a[i];

		if (a[i] > 0) {
			sum = sum + a[i];
			cn_p++;
			if (a[i] >= 2.5 && a[i] <= 3.5) {
				coun++;
			}
		}
	}

	cout << "\nИСХОДНЫЙ МАССИВ A:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << a[i] << " ";
	}
	cout << "\n\nПОЛУЧЕННЫЕ РЕЗУЛЬТАТЫ:" << endl;
	cout << "Кол-во элементов в интервале от 2.5 до 3.5: " << coun << endl;

	cout << "Среднее арифметическое положительных элементов: ";
	if (cn_p == 0) {
		cout << cn_p << "Положительных элеметов не было найдено" << endl;
	}
	else {
		sr = sum / cn_p;
		cout << sr << endl;
	}

	cout << "\n========================================================================" << endl;
}



void lab7()
{
	cout << "Лабараторная #7\nОБРАБОТКА ДВУХМЕРНЫХ МАССИВОВ" << endl;
	cout << "Задание: Дана матрица А(5*5) нецелых элементов.\nСоставить программу для обработки исходной матрицы в соответствии с индивидуальным заданием.\nИндивидуальное задание: 4.Определить максимальный элемент матрицы А, номер его строки и номер его\nстолбца.Сформировать одномерный массив Х из элементов той строки, в которой расположен максимальный элемент." << endl;
	cout << "========================================================================\n" << endl;

	double a[5][5] = {
		-3.8, 0, 5.3, 4.5, 0.5,
		0.2, -1.3, 0, -8.5, 3.5,
		-1.1, 1.8, 5.1, -8.2, 0.32,
		0, -0.3, 0, -1.28, 0.52,
		-0.3, 0.5, 1.8, -7.3, 5.5
	};

	int str, stol;
	double max = -1000000000000000, x[5];

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			if (a[i][k] > max) {
				max = a[i][k];
				str = i;
				stol = k;
			}
		}
	}
	for (int k = 0; k < 5; k++) {
		x[k] = a[str][k];
	}
	cout << "ИСХОДНАЯ МАТРИЦА:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			cout << a[i][k] << "\t";
		}
		cout << endl;
	}
	cout << "\nПОЛУЧЕННЫЕ РЕЗУЛЬТАТЫ:" << endl;
	cout << "Максимальное значение A[5][5]: " << max << endl;
	cout << "Строка максимального значения: " << str << endl;
	cout << "Столбец максимального значения: " << stol << endl;
	cout << "Массив из строчки максимального значения: ";
	for (int i = 0; i < 5; i++) {
		cout << x[i] << " ";
	}
	cout << endl;

	cout << "\n========================================================================" << endl;
}



void lab8()
{
	cout << "Лабараторная #8\nОБРАБОТКА СИМВОЛЬНОЙ ИНФОРМАЦИИ" << endl;
	cout << "Задание: В исходном предложении удалить все символы пробела. Вывести преобразованный текст и число удаленных пробелов." << endl;
	cout << "Требование к предложению: предложение должно заканчиваться точкой, разделитель слов в предложении - пробел" << endl;
	cout << "========================================================================\n" << endl;

	char str[999];
	int dl = 0;
	int flag_end = 0;
	int check_space;

	printf("Вводите предложение только на английском.\nВведите исходное предложение предложение: ");
	gets_s(str);
	// cout << str << endl;
	for (int i = 0; i < 999; i++) {
		if (str[i] == '!' || str[i] == '?' || str[i] == '.') flag_end = 1;
	}

	if (flag_end != 0) {
		printf("\n\nНовое предложение: ");
		for (int i = 0; i < 999; i++) {
			if (str[i] == ' ') {
				check_space = 1;
				while (str[i] == ' ') {
					if (str[i + check_space] == ' ') {
						check_space++;
					}
					else {
						dl = dl + check_space;
						str[i] = str[i + check_space];
						i = i + check_space;
					}
				}
			}
			else if (str[i] == '!' || str[i] == '?' || str[i] == '.') {
				cout << str[i] << endl;
				break;
			}
			cout << str[i];
		}

		/**/

		printf("Число удалёных пробелов: %d\n", dl);
	}
	else {
		printf("\n\nПредложение не имеет конца. Перезапустите программу и закончите его.\n(Поставьте точку)\n");
	}
	cout << "\n========================================================================" << endl;
}





struct list
{
	int num;
	char fam[500];
	char pol;
	int year_b;
	int year_w;
};
void lab9()
{
	cout << "Лабараторная #9\nОБРАБОТКА СТРУКТУР" << endl;
	cout << "Задание: По данным таблицы 6, содержащей информацию о работниках предприятия,\nпровести упорядочивание данных по возрастанию или убыванию значения реквизита, указанного в варианте.\nВывести на печать исходную таблицу и упорядоченную таблицу." << endl;
	cout << "Задание варианта: Упорядочить сведения в порядке убывания значения года рождения." << endl;
	cout << "========================================================================\n" << endl;
	
	list l[10];
	l[0].num = 1;	strcpy(l[0].fam, "Анисимов Ю.П");	l[0].pol = 'М';		l[0].year_b = 1940;		l[0].year_w = 1957;
	l[1].num = 2;	strcpy(l[1].fam, "Иванов И.Н");		l[1].pol = 'М';		l[1].year_b = 1980;		l[1].year_w = 1999;
	l[2].num = 3;	strcpy(l[2].fam, "Махова О.И");		l[2].pol = 'Ж';		l[2].year_b = 1960;		l[2].year_w = 1980;
	l[3].num = 4;	strcpy(l[3].fam, "Огарев К.М");		l[3].pol = 'М';		l[3].year_b = 1971;		l[3].year_w = 1990;
	l[4].num = 5;	strcpy(l[4].fam, "Егорова П.К");	l[4].pol = 'Ж';		l[4].year_b = 1993;		l[4].year_w = 2011;
	l[5].num = 6;	strcpy(l[5].fam, "Голикова О.И");	l[5].pol = 'Ж';		l[5].year_b = 1972;		l[5].year_w = 1990;
	l[6].num = 7;	strcpy(l[6].fam, "Сотников Т.С");	l[6].pol = 'М';		l[6].year_b = 1943;		l[6].year_w = 1960;
	l[7].num = 8;	strcpy(l[7].fam, "Комов В.И");		l[7].pol = 'М';		l[7].year_b = 1979;		l[7].year_w = 2005;
	l[8].num = 9;	strcpy(l[8].fam, "Лебедев А.А");	l[8].pol = 'М';		l[8].year_b = 1959;		l[8].year_w = 1981;
	l[9].num = 10;	strcpy(l[9].fam, "Димова В.В");		l[9].pol = 'Ж';		l[9].year_b = 1991;		l[9].year_w = 2010;

	printf("Исходная таблица:\n");
	printf("------------------------------------------------------------------------\n");
	printf("| # |       ФИО       |   Пол   |   Год Рождения   | Год начала работы |\n");
	printf("------------------------------------------------------------------------\n");

	for (int i = 0; i < 10; i++) {
		printf("| %d\t%s\t   %c\t\t%d\t\t    %d       |\n", i+1, l[i].fam, l[i].pol, l[i].year_b, l[i].year_w);
	}
	printf("------------------------------------------------------------------------\n\n\n\n");
	


	int ope = 10;
	while (ope--)
	{
		for (int i = 0; i < ope; i++) {
			int one = i + 1;
			if (l[i].year_b < l[one].year_b) {
				swap(l[i], l[one]);
			}
		}
	}

	printf("Упорядоченная таблица:\n");
	printf("------------------------------------------------------------------------\n");
	printf("| # |       ФИО       |   Пол   |   Год Рождения   | Год начала работы |\n");
	printf("------------------------------------------------------------------------\n");

	for (int i = 0; i < 10; i++) {
		printf("| %d\t%s\t   %c\t\t%d\t\t    %d       |\n", i+1, l[i].fam, l[i].pol, l[i].year_b, l[i].year_w);
	}
	printf("------------------------------------------------------------------------\n");
	
	

	cout << "\n========================================================================" << endl;
}



void lab10()
{
	cout << "Лабараторная #10\nБЕЗТИПОВЫЕ ПОДПРОГРАММЫ – ФУНКЦИИ" << endl;
	cout << "Задание: Разработать нетипизированную функцию для выполнения над матрицей размером 5х5 операций в соответствии с вариантом.\nНа печать вывести исходную и преобразованную матрицы." << endl;
	cout << "========================================================================\n" << endl;

	printf("Вроде говорили не делать");

	cout << "\n========================================================================" << endl;
}



void lab11()
{
	cout << "Лабараторная #11\nТИПОВЫЕ ПОДПРОГРАММЫ - ФУНКЦИИ" << endl;
	cout << "Задание: Разработать типизированную функцию для выполнения над матрицей размером 5х5 операций в соответствии с вариантом.\nНа печать вывести исходную матрицу и полученный результат с текстовым комментарием." << endl;
	cout << "========================================================================\n" << endl;

	printf("Вроде говорили не делать");

	cout << "\n========================================================================" << endl;
}






double calcRec(double pi, int i) {
	if (i == 0) {
		return 1.0;
	}
	else {
		double term = pow(-1, i) * pow(pi, 2 * i) / tgamma(2 * i + 1);
		return term + calcRec(pi, i - 1);
	}
}
void lab12()
{
	cout << "Лабараторная #12" << endl;
	cout << "Задание: Написать программу и рекурсивную функцию для вычисления значения суммы\nбесконечного ряда с заданной точностью.На печать вывести значение суммы\nи число членов ряда, вошедших в сумму.Вычислить значение ряда, используя\nзаданную формулу или воспользовавшись библиотечной функцией. Сравнить\nполученные результаты(они должны быть достаточно близки)." << endl;
	cout << "========================================================================\n" << endl;

	double pi = M_PI / 6.0;
	double sum = 0.0;
	double e = 0.5*pow(10, -4);

	int c = 0;

	bool flag_check = false;
	do {
		sum += calcRec(pi, c);
		c++;
		if (fabs(calcRec(pi, c)) > e) { flag_check = true; }
	} while (flag_check == false);

	double res = cos(pi);

	printf("Значение суммы ряда: %f\nКол-во чисел в ряду: %d\nЗначение ряда через функцию: %f\n", sum, c, res);

	cout << "\n========================================================================" << endl;
}

void select_Lab(int lab)
{
	cout << "\n\n" << endl;
	if (lab == 2) { lab2(); }
	else if (lab == 3) { lab3(); }
	else if (lab == 4) { lab4(); }
	else if (lab == 5) { lab5(); }
	else if (lab == 6) { lab6(); }
	else if (lab == 7) { lab7(); }
	else if (lab == 8) { lab8(); }
	else if (lab == 9) { lab9(); }
	else if (lab == 10) { lab10(); }
	else if (lab == 11) { lab11(); }
	else if (lab == 12) { lab12(); }
}