#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>

#include "include_cpp.h"

using namespace std;

int l_flag = 1, m_flag, r_vrnt, hide = 0;

void M_Main()
{
	system("cls");

	cout << "1. - Открыть РГР" << endl;
	cout << "2. - Открыть лабараторные (Вариант 4)" << endl;
	cout << "3. - Информация о разработчике" << endl;
	cout << "4. - Ссылки" << endl;
	cout << "Q. - Назад / Выход" << endl;
}

void M_Labs(int l_flag)
{
	system("cls");

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

void InformationOwn()
{
	system("cls");

	cout << "Работа была выполнена:" << endl;
	// cout << 
}

void OpenLinks() {

}

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "Russian"); // да будет русский язык

	cout << "Нажмите кнопку для продолжения..." << endl;
	_getch(); // Считывание нажатой клавиши с клавиатуры
	m_flag = 1;
	while (1)
	{
		if (m_flag == 1) { // Главное меню
			M_Main(); // Открытие главного меню
			char key = _getch();

			if (key == '1') { // Открытие РГР
				m_flag = 2;
			}
			else if (key == '2') { // Выбор лабараторных
				m_flag = 3; // Переключаем меню
				M_Labs(l_flag);
			}
			else if (key == '3') { // Информация о разработчике
				m_flag = 4;
			}
			else if (key == '4') { // Ссылки
				m_flag = 5;
			}
			else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { // Полный выход
					system("cls"); // Очистка консоли
					return 0;
			}
		}
		else if (m_flag == 2) { // Открытие РГР
			char key = _getch();

			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { // Выход в главное меню
				m_flag = 1; // Переключаем на гл.меню
			}
		}
		else if (m_flag == 3) { // Выбор лабараторных
			char key = _getch();

			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { // Выход в главное меню
					m_flag = 1; // Переключаем на гл.меню
			}

			if (l_flag == 1) { // Выбор лабараторных на первой странице
				r_vrnt = 1;
				if (key == '1' || key == '2' || key == '3' || key == '4' || key == '5' || key == '6' || key == '7') {
					int lab = r_vrnt + (key - '0');
					M_Labs(l_flag);
					select_Lab(lab);
				}
				else if (key == '9') { // Страницу вперёд
					l_flag = 2;
					M_Labs(l_flag);
				}
			}
			else if (l_flag == 2) { // Выбор лабараторных на второй странице
				r_vrnt = 8;
				if (key == '1' || key == '2' || key == '3' || key == '4') {
					int lab = r_vrnt + (key - '0');
					M_Labs(l_flag);
					select_Lab(lab);
				}
				else if (key == '8') { // Страницу назад
					l_flag = 1;
					M_Labs(l_flag);
				}
			}
		}
		else if (m_flag == 4) { // Информация о разработчике
			InformationOwn();

			char key = _getch();
			
			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { // Выход в главное меню
				m_flag = 1; // Переключаем на гл.меню
			}
		}
		else if (m_flag == 5) { // Ссылки
			OpenLinks();
			char key = _getch();

			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { // Выход в главное меню
				m_flag = 1; // Переключаем на гл.меню
			}
		}
	}
}