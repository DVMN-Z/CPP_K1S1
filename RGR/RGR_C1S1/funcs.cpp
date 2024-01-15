#include <iostream>

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


void find_otr(int m[6][6], int sum) {
	sum = 0;
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++) {
			if (m[i][k] < 0) {
				sum += m[i][k];
			}
		}
	}
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

void matrixs_out(int m1[6][6], int m2[6][6], int sum) {
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

	cout << "\n==========================================================================" << endl;
	
	cout << "\n\tQ. - Вернуться в главное меню" << endl;
}

