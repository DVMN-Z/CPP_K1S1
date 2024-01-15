#include <iostream>
#include <fstream>

using namespace std;

void generate_matrix_r(int m[6][6]) {
	srand(time(0));
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++) {
			m[i][k] = (rand() % 2000 - 1000);
		}
	}
}

void generate_matrix_i(int m[6][6]) {
	cout << "\tМетод ввода матрицы с клавиатуры:\n" << endl;
	cout << "\tВведите значения для матрицы A[6][6]:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << "Строка " << i + 1 << ": ";
		for (int k = 0; k < 6; k++) {
			cin >> m[i][k];
		}
	}
}

void generate_matrix_readfile(int m[6][6]) {
	int n = 0;

	fstream F;
	F.open("C:\\RGR\\numbers.txt", ios::in);
	if (F) {
		cout << "\n\tФайл был найден!\n\tВсё возможное из файла было перемещено в матрицу" << endl;
		while (n != 36) {
			for (int i = 0; i < 6; i++) {
				for (int k = 0; k < 6; k++) {
					if (!F.eof()) {
						F >> m[i][k];
					}
					else {
						m[i][k] = 0;
					}
					n++;
				}
			}

		}
	}
	else {
		cout << "\n\tФайл не был найден!\n\tВсё заменено на 0" << endl;
		for (int i = 0; i < 6; i++) {
			for (int k = 0; k < 6; k++) {
				m[i][k] = 0;
			}
		}
	}
	F.close();
}


int find_otr(int m[6][6]) {
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++) {
			if (m[i][k] < 0) {
				sum += m[i][k];
			}
		}
	}
	return sum;
}

void p_fstring(int m1[6][6], int m2[6][6]) {
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++) {
			if (i == 0) {
				m2[i][k] = m1[i][k] + 10;
			}
			else {
				m2[i][k] = m1[i][k];
			}
		}
	}
}

void matrixs_out(int m1[6][6], int m2[6][6]) {
	system("cls");
	cout << "==========================================================================\n" << endl;

	cout << "\tПервородная матрица:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << "\t\t";
		for (int k = 0; k < 6; k++) {
			cout << m1[i][k] << "\t";
		}
		cout << endl;
	}
	cout << "\n\tМатрица с выполнеными задачами:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << "\t\t";
		for (int k = 0; k < 6; k++) {
			cout << m2[i][k] << "\t";
		}
		cout << endl;
	}

	cout << "\nСумма отрицательных чисел в первообразной матрице: " << find_otr(m1) << endl;
	cout << "Сумма отрицательных чисел в преобразованной матрице: " << find_otr(m2) << endl;

	cout << "\n==========================================================================" << endl;
	
	cout << "\n\tQ. - Вернуться в главное меню" << endl;
}

