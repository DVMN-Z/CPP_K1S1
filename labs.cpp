#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


#pragma warning(disable : 4996)

using namespace std;

void lab2()
{
	cout << "������������ #2\n���������������� �������� ����������" << endl;
	cout << "�������: �������� ��������� �� ����� �++ ��� ������� �������� �������� �������.\n������� �������� � ������������ � ���������" << endl;
	cout << "========================================================================\n" << endl;

	double b, x = 1.5, a = 2.5;

	b = exp(-a * x) * cos(a * x) + cbrt(fabs(x - a));
	cout << "��������� �������: b = " << b << endl;

	cout << "\n========================================================================" << endl;
}



void lab3()
{
	cout << "������������ #3\n���������������� ����������� ����������" << endl;
	cout << "�������: �������� ��������� �� ����� �++ ��� ������� ������� �������� �������� �������" << endl;
	cout << "========================================================================\n" << endl;

	string answer;
	double x = 0.5, y, c;
	int cn = 1;
	cout << "�������� ������� ������\n�������� ������� ���������� ��������� (for/while/do_while): ";
	cin >> answer;
	cout << endl;
	if (answer == "for") {
		for (y = 1; y <= 8; y = y + 0.5)
		{
			c = pow(2, x + y);
			cout << "��������� ����� #" << cn << ". C = " << c << endl;
			cn++;
		}
	}
	else if (answer == "while") {
		y = 1;
		while (y <= 8)
		{
			c = pow(2, x + y);
			cout << "��������� ����� #" << cn << ". C = " << c << endl;
			cn++;
			y = y + 0.5;
		}
	}
	else if (answer == "do_while") {
		y = 1;
		do {
			c = pow(2, x + y);
			cout << "��������� ����� #" << cn << ". C = " << c << endl;
			cn++;
			y = y + 0.5;
		} while (y <= 8);
	}

	cout << "\n========================================================================" << endl;
}



void lab4()
{
	cout << "������������ #4\n������ �������� ������� ���� ����������." << endl;
	cout << "�������: � ������������ � �������������� �������� ������� 3 � ������������ ������\n��������� ����� ��������� � �������� ��������� �� ����� �++ ��� �������\n���������� ������ �������� �������." << endl;
	cout << "========================================================================\n" << endl;

	double y, a, x;
	int tbl = 1;

	for (a = 0.125; a <= 0.525; a = a + 0.200)
	{
		cout << "\t������� #" << tbl << "\t\t\t�������� � = " << a << endl;
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
	cout << "������������ #5\n�������� ���������� ��������" << endl;
	cout << "�������: � ������������ � ��������� ������� ����������� ��������� �� ����� �++ ���\n��������� ������������������ �����, �������� � ����������." << endl;
	cout << "========================================================================\n" << endl;

	string ans;
	
	cout << "�� ������ ������� ���-�� �������� �����? (Y/N) ";
	cin >> ans;
	if (ans == "Y" || ans == "y") {

		int num, cn_o = 0;
		double inp_fr, sr, sum = 0;

		printf("\n������� ���-�� �������� �����: ");
		scanf("%d", &num);	

		for (int cn = 1; cn <= num; cn++)
		{
			printf("������� �����: ");
			scanf("%e", &inp_fr);
			
			if (inp_fr < 0) {
				sum = sum + inp_fr;
				cn_o++;
			}
		}
		sr = sum / cn_o;
		cout << "������� �������������� ������������� ����� = " << sr << endl;

	}
	else if (ans == "N" || ans == "n") {
		string ansp = "Y";
		int cn_o = 0, off = 0;
		double inp_fr, sr, sum = 0;
		
		while (ansp != "N" && ansp != "n")
		{
			printf("������� �����: ");
			scanf("%e", &inp_fr);

			if (inp_fr < 0) {
				sum = sum + inp_fr;
				cn_o++;
			}

			cout << "������ ����������? (Y/N) ";
			cin >> ansp;
			if (ansp != "Y" && ansp != "y" && ansp != "N" && ansp != "n") {
				cout << "����������� ��� �����. ���������..." << endl;
				off = 1;
				break;
			}
		}

		if (off != 1) {
			sr = sum / cn_o;
			cout << "������� �������������� ������������� ����� = " << sr << endl;
		}
	}
	else { cout << "\n�� ����� ������������ �����.\n�������������, ���� ������ ������ �����" << endl; }

	cout << "\n========================================================================" << endl;
}



void lab6()
{
	cout << "������������ #6\n������������ � ��������� ���������� ��������" << endl;
	cout << "�������: ������ �[20] ������� ��������� ������ � ����������.\n���������� ������� �������������� ������������� ��������� ������� � ��������� ������� ��������� ��������� � ��������� �� 2,5 �� 3,5. " << endl;
	cout << "========================================================================\n" << endl;

	double sr, a[20], sum = 0;
	int coun = 0, cn_p = 0;

	for (int i = 0; i < 20; i++) {
		cout << "������� ������ " << i << " : ";
		cin >> a[i];

		if (a[i] > 0) {
			sum = sum + a[i];
			cn_p++;
			if (a[i] >= 2.5 && a[i] <= 3.5) {
				coun++;
			}
		}
	}

	cout << "\n�������� ������ A:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << a[i] << " ";
	}
	cout << "\n\n���������� ����������:" << endl;
	cout << "���-�� ��������� � ��������� �� 2.5 �� 3.5: " << coun << endl;

	cout << "������� �������������� ������������� ���������: ";
	if (cn_p == 0) {
		cout << cn_p << "������������� �������� �� ���� �������" << endl;
	}
	else {
		sr = sum / cn_p;
		cout << sr << endl;
	}

	cout << "\n========================================================================" << endl;
}



void lab7()
{
	cout << "������������ #7\n��������� ���������� ��������" << endl;
	cout << "�������: ���� ������� �(5*5) ������� ���������.\n��������� ��������� ��� ��������� �������� ������� � ������������ � �������������� ��������.\n�������������� �������: 4.���������� ������������ ������� ������� �, ����� ��� ������ � ����� ���\n�������.������������ ���������� ������ � �� ��������� ��� ������, � ������� ���������� ������������ �������." << endl;
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
	cout << "�������� �������:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			cout << a[i][k] << "\t";
		}
		cout << endl;
	}
	cout << "\n���������� ����������:" << endl;
	cout << "������������ �������� A[5][5]: " << max << endl;
	cout << "������ ������������� ��������: " << str << endl;
	cout << "������� ������������� ��������: " << stol << endl;
	cout << "������ �� ������� ������������� ��������: ";
	for (int i = 0; i < 5; i++) {
		cout << x[i] << " ";
	}
	cout << endl;

	cout << "\n========================================================================" << endl;
}



void lab8()
{
	cout << "������������ #8\n��������� ���������� ����������" << endl;
	cout << "�������: � �������� ����������� ������� ��� ������� �������. ������� ��������������� ����� � ����� ��������� ��������." << endl;
	cout << "���������� � �����������: ����������� ������ ������������� ������, ����������� ���� � ����������� - ������" << endl;
	cout << "========================================================================\n" << endl;

	char str[999];
	int dl = 0;
	int flag_end = 0;
	int check_space;

	printf("������� ����������� ������ �� ����������.\n������� �������� ����������� �����������: ");
	gets_s(str);
	// cout << str << endl;
	for (int i = 0; i < 999; i++) {
		if (str[i] == '!' || str[i] == '?' || str[i] == '.') flag_end = 1;
	}

	if (flag_end != 0) {
		printf("\n\n����� �����������: ");
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

		printf("����� ������� ��������: %d\n", dl);
	}
	else {
		printf("\n\n����������� �� ����� �����. ������������� ��������� � ��������� ���.\n(��������� �����)\n");
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
	cout << "������������ #9\n��������� ��������" << endl;
	cout << "�������: �� ������ ������� 6, ���������� ���������� � ���������� �����������,\n�������� �������������� ������ �� ����������� ��� �������� �������� ���������, ���������� � ��������.\n������� �� ������ �������� ������� � ������������� �������." << endl;
	cout << "������� ��������: ����������� �������� � ������� �������� �������� ���� ��������." << endl;
	cout << "========================================================================\n" << endl;
	
	list l[10];
	l[0].num = 1;	strcpy(l[0].fam, "�������� �.�");	l[0].pol = '�';		l[0].year_b = 1940;		l[0].year_w = 1957;
	l[1].num = 2;	strcpy(l[1].fam, "������ �.�");		l[1].pol = '�';		l[1].year_b = 1980;		l[1].year_w = 1999;
	l[2].num = 3;	strcpy(l[2].fam, "������ �.�");		l[2].pol = '�';		l[2].year_b = 1960;		l[2].year_w = 1980;
	l[3].num = 4;	strcpy(l[3].fam, "������ �.�");		l[3].pol = '�';		l[3].year_b = 1971;		l[3].year_w = 1990;
	l[4].num = 5;	strcpy(l[4].fam, "������� �.�");	l[4].pol = '�';		l[4].year_b = 1993;		l[4].year_w = 2011;
	l[5].num = 6;	strcpy(l[5].fam, "�������� �.�");	l[5].pol = '�';		l[5].year_b = 1972;		l[5].year_w = 1990;
	l[6].num = 7;	strcpy(l[6].fam, "�������� �.�");	l[6].pol = '�';		l[6].year_b = 1943;		l[6].year_w = 1960;
	l[7].num = 8;	strcpy(l[7].fam, "����� �.�");		l[7].pol = '�';		l[7].year_b = 1979;		l[7].year_w = 2005;
	l[8].num = 9;	strcpy(l[8].fam, "������� �.�");	l[8].pol = '�';		l[8].year_b = 1959;		l[8].year_w = 1981;
	l[9].num = 10;	strcpy(l[9].fam, "������ �.�");		l[9].pol = '�';		l[9].year_b = 1991;		l[9].year_w = 2010;

	printf("�������� �������:\n");
	printf("------------------------------------------------------------------------\n");
	printf("| # |       ���       |   ���   |   ��� ��������   | ��� ������ ������ |\n");
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

	printf("������������� �������:\n");
	printf("------------------------------------------------------------------------\n");
	printf("| # |       ���       |   ���   |   ��� ��������   | ��� ������ ������ |\n");
	printf("------------------------------------------------------------------------\n");

	for (int i = 0; i < 10; i++) {
		printf("| %d\t%s\t   %c\t\t%d\t\t    %d       |\n", i+1, l[i].fam, l[i].pol, l[i].year_b, l[i].year_w);
	}
	printf("------------------------------------------------------------------------\n");
	
	

	cout << "\n========================================================================" << endl;
}



void lab10()
{
	cout << "������������ #10\n���������� ������������ � �������" << endl;
	cout << "�������: ����������� ���������������� ������� ��� ���������� ��� �������� �������� 5�5 �������� � ������������ � ���������.\n�� ������ ������� �������� � ��������������� �������." << endl;
	cout << "========================================================================\n" << endl;

	printf("����� �������� �� ������");

	cout << "\n========================================================================" << endl;
}



void lab11()
{
	cout << "������������ #11\n������� ������������ - �������" << endl;
	cout << "�������: ����������� �������������� ������� ��� ���������� ��� �������� �������� 5�5 �������� � ������������ � ���������.\n�� ������ ������� �������� ������� � ���������� ��������� � ��������� ������������." << endl;
	cout << "========================================================================\n" << endl;

	printf("����� �������� �� ������");

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
	cout << "������������ #12" << endl;
	cout << "�������: �������� ��������� � ����������� ������� ��� ���������� �������� �����\n������������ ���� � �������� ���������.�� ������ ������� �������� �����\n� ����� ������ ����, �������� � �����.��������� �������� ����, ���������\n�������� ������� ��� ���������������� ������������ ��������. ��������\n���������� ����������(��� ������ ���� ���������� ������)." << endl;
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

	printf("�������� ����� ����: %f\n���-�� ����� � ����: %d\n�������� ���� ����� �������: %f\n", sum, c, res);

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