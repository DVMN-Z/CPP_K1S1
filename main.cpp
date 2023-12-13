#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>

#include "include_cpp.h"

using namespace std;

int l_flag = 1, m_flag, r_vrnt, hide = 0;

void openURL(string url) {
	string com = "start " + url;
	system(com.c_str());
}
void M_Main()
{
	system("cls");
	cout << "=======================================================================================================\n" << endl;
	cout << "\t\t\t\t1. - Открыть РГР (Пока нету)" << endl;
	cout << "\t\t\t\t2. - Открыть лабараторные (Вариант 4)" << endl;
	cout << "\t\t\t\t3. - Информация о разработчике" << endl;
	cout << "\t\t\t\t4. - Ссылки" << endl;
	cout << "\t\t\t\tQ. - Назад / Выход" << endl;
	cout << "\n=======================================================================================================" << endl;

}
void M_Labs(int l_flag)
{
	system("cls");
	cout << "=======================================================================================================\n" << endl;
	if (l_flag == 1) {
		cout << "\t\t\t\t1. - Лабараторная #2" << endl;
		cout << "\t\t\t\t2. - Лабараторная #3" << endl;
		cout << "\t\t\t\t3. - Лабараторная #4" << endl;
		cout << "\t\t\t\t4. - Лабараторная #5" << endl;
		cout << "\t\t\t\t5. - Лабараторная #6" << endl;
		cout << "\t\t\t\t6. - Лабараторная #7" << endl;
		cout << "\t\t\t\t7. - Лабараторная #8" << endl;
		cout << "\t\t\t\t9. - Далее..." << endl;
		cout << "\t\t\t\tQ. - Назад / Выход" << endl;
	}
	else if (l_flag == 2) {
		cout << "\t\t\t\t1. - Лабараторная #9" << endl;
		cout << "\t\t\t\t2. - Лабараторная #10" << endl;
		cout << "\t\t\t\t3. - Лабараторная #11" << endl;
		cout << "\t\t\t\t4. - Лабараторная #12" << endl;
		cout << "\t\t\t\t8. - Назад..." << endl;
		cout << "\t\t\t\tQ. - Назад / Выход" << endl;
	}				   
	cout << "\n=======================================================================================================" << endl;
}
void InformationOwn()
{
	system("cls");

	cout << "=======================================================================================================\n" << endl;
	cout << "\t\t\t\tРабота была выполнена:" << endl;
	cout << "\t\t\t\tФ.И.О. Ученика: Гирфаутдинов Антон Олегович" << endl;
	cout << "\t\t\t\tГруппа Ученика: ТИ-319" << endl;
	cout << "\t\t\t\tНомер зачетной книжки: #101230104" << endl;
	cout << "\t\t\t\tВариант выполненых заданий: 4" << endl;
	cout << "\n=======================================================================================================" << endl;

}
void OpenLinks() {
	system("cls");

	cout << "=======================================================================================================\n" << endl;
	cout << "\t\t\t\t1. - GitHub" << endl;
	cout << "\t\t\t\t2. - Профиль СибГУТИ" << endl;
	cout << "\t\t\t\t3. - VK" << endl;
	cout << "\t\t\t\t4. - ТГК" << endl;
	cout << "\t\t\t\tQ. - Назад / Выход" << endl;
	cout << "\n=======================================================================================================" << endl;

}

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "Russian");

	cout << "\n\t\tВведите любой символ, чтобы продолжить..." << endl;
	_getch();
	m_flag = 1;
	while (1)
	{
		if (m_flag == 1) {
			M_Main();
			char key = _getch();

			if (key == '1') { 
				m_flag = 2;
			}
			else if (key == '2') { 
				m_flag = 3; 
				M_Labs(l_flag);
			}
			else if (key == '3') { 
				m_flag = 4;
			}
			else if (key == '4') { 
				m_flag = 5;
			}
			else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { 
					system("cls");
					return 0;
			}
		}
		else if (m_flag == 2) { 
			char key = _getch();

			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { 
				m_flag = 1; 
			}
		}
		else if (m_flag == 3) { 
			char key = _getch();

			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { 
					m_flag = 1;
			}

			if (l_flag == 1) {
				r_vrnt = 1;
				if (key == '1' || key == '2' || key == '3' || key == '4' || key == '5' || key == '6' || key == '7') {
					int lab = r_vrnt + (key - '0');
					M_Labs(l_flag);
					select_Lab(lab);
				}
				else if (key == '9') { 
					l_flag = 2;
					M_Labs(l_flag);
				}
			}
			else if (l_flag == 2) { 
				r_vrnt = 8;
				if (key == '1' || key == '2' || key == '3' || key == '4') {
					int lab = r_vrnt + (key - '0');
					M_Labs(l_flag);
					select_Lab(lab);
				}
				else if (key == '8') { 
					l_flag = 1;
					M_Labs(l_flag);
				}
			}
		}
		else if (m_flag == 4) {
			InformationOwn();

			char key = _getch();
			
			if (key == 'q' || key == 'Q' || key == '©' || key == '‰') { 
				m_flag = 1;
			}
		}
		else if (m_flag == 5) { 
			OpenLinks();
			char key = _getch();

			if (key == '1' || key == '2' || key == '3' || key == '4') {
				int v = key - '0';
				if (v == 1) {
					string url = "https://github.com/DVMN-Z";
					openURL(url);
				}
				else if (v == 2) {
					string url = "https://sibsutis.ru/company/personal/user/256421/";
					openURL(url);
				}
				else if (v == 3) {
					string url = "https://vk.com/lz_zon9";
					openURL(url);
				}
				else if (v == 4) {
					string url = "https://t.me/DV_MN";
					openURL(url);
				}
			}
			else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
				m_flag = 1;
			}
		}
	}
}
