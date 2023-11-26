#include <iostream>
#include <conio.h>
#include "include_cpp.h"

using namespace std;

int l_flag = 1, m_flag, r_vrnt, hide = 0, pause = 0;

void M_Main()
{
	cout << "1. - Открыть РГР" << endl;
	cout << "2. - Открыть лабараторные (Вариант 4)" << endl;
	cout << "3. - Информация о разработчике" << endl;
	cout << "4. - Ссылки" << endl;
	cout << "Q. - Назад / Выход" << endl;
}

void M_Labs(int l_flag, int pause)
{
	if (pause != 1) {
		if (l_flag == 1) {
			cout << "1. - Лабараторная #2" << endl;
			cout << "2. - Лабараторная #3" << endl;
			cout << "3. - Лабараторная #4" << endl;
			cout << "4. - Лабараторная #5" << endl;
			cout << "5. - Лабараторная #6" << endl;
			cout << "6. - Лабараторная #7" << endl;
			cout << "7. - Лабараторная #8" << endl;
			cout << "9. - Далее..." << endl;
			cout << "Q. - Назад / Выход" << endl;
		}
		else if (l_flag == 2) {
			cout << "1. - Лабараторная #9" << endl;
			cout << "2. - Лабараторная #10" << endl;
			cout << "3. - Лабараторная #11" << endl;
			cout << "4. - Лабараторная #12" << endl;
			cout << "8. - Назад..." << endl;
			cout << "Q. - Назад / Выход" << endl;
		}
	}
}

int main()
{
	m_flag = 1;
	setlocale(LC_ALL, "Russian"); // да будет русский язык

	cout << "Нажмите кнопку для продолжения..." << endl;
	_getch(); // Считывание нажатой клавиши с клавиатуры
	while (1)
	{
		if (hide == 0) {
			if (m_flag == 1) {
				system("cls");
				M_Main();
				char key = _getch();

				if (key == '1') {

				}
				else if (key == '2') {
					m_flag = 2;
				}
				else if (key == '3') {

				}
				else if (key == '4') {

				}
				else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
					system("cls"); // Очистка консоли
					return 0;
				}
				else {
					cout << "\n\n\n\nНеправильно нажатая клавиша";
				}
			}
			else if (m_flag == 2) {
				system("cls");
				M_Labs(l_flag, pause);
				char key = _getch();

				if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
					m_flag = 1;
				}

				if (l_flag == 1) {
					r_vrnt = 1;
					if (key == '1' || key == '2' || key == '3' || key == '4' || key == '5' || key == '6' || key == '7') {
						int lab = r_vrnt + (key - '0');
						pause = 0;
						select_Lab(lab);
						pause = 1;
					}
					else if (key == '9') {
						l_flag = 2;
					}
				}
				else if (l_flag == 2) {
					r_vrnt = 8;
					if (key == '1' || key == '2' || key == '3' || key == '4') {
						int lab = r_vrnt + (key - '0');
						select_Lab(lab);
						_getch();
					}
					else if (key == '8') {
						l_flag = 1;
					}
				}
			}
			else if (m_flag == 3) {

			}
			else if (m_flag == 4) {

			}
		}
	}
}