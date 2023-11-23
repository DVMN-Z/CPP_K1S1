#include <iostream>
#include <conio.h>
#include "include_labs.h"

using namespace std;

int vbr = 0, list, lab, v;
bool flag_list = false;


void M_Main(int vbr)
{
	system("cls");
	cout << "Выберите лабараторную (нажмите кнопку)" << endl;
	if (vbr == 0)
	{
		cout << "1: Лабараторная #1" << endl; lab = 0;
		cout << "2: Лабараторная #2" << endl;
		cout << "3: Лабараторная #3" << endl;
		cout << "4: Лабараторная #4" << endl;
		cout << "5: Лабараторная #5" << endl;
		cout << "6: Далее..." << endl;
		cout << "Q: Закрыть программу" << endl;
	}
	else if (vbr == 1) 
	{
		cout << "1: Лабараторная #6" << endl; lab = 5;
		cout << "2: Лабараторная #7" << endl;
		cout << "3: Лабараторная #8" << endl;
		cout << "4: Лабараторная #9" << endl;
		cout << "5: Лабараторная #10" << endl;
		cout << "6: Далее..." << endl;
		cout << "7: Назад..." << endl;
		cout << "Q: Закрыть программу" << endl;
	}
	else if (vbr == 2)
	{
		cout << "1: Лабараторная #11" << endl; lab = 10;
		cout << "2: Лабараторная #12" << endl;
		cout << "7: Назад..." << endl;
		cout << "Q: Закрыть программу" << endl;
	}
}

void M_Variant(int list)
{
	system("cls");
	cout << "Выберите вариант (нажмите кнопку)" << endl;

	flag_list = true;
	if (list == 0)
	{
		v = 0;
		cout << "1: Вариант #1" << endl;
		cout << "2: Вариант #2" << endl;
		cout << "3: Вариант #3" << endl;
		cout << "4: Вариант #4" << endl;
		cout << "5: Вариант #5" << endl;
		cout << "6: Вариант #6" << endl;
		cout << "7: Вариант #7" << endl;
		cout << "8: Вариант #8" << endl;
		cout << "9: Далее..." << endl;
		cout << "Q: Вернуться в меню" << endl;
	} 
	else if (list == 1)
	{
		v = 0;
		cout << "1: Вариант #9" << endl;
		cout << "2: Вариант #10" << endl; 
		cout << "3: Вариант #11" << endl;
		cout << "4: Вариант #12" << endl; 
		cout << "5: Вариант #13" << endl; 
		cout << "6: Вариант #14" << endl; 
		cout << "7: Вариант #15" << endl; 
		cout << "8: Вариант #16" << endl; 
		cout << "9: Далее..." << endl;
		cout << "0: Назад..." << endl;
		cout << "Q: Закрыть программу" << endl;
	}
	else if (list == 2) 
	{
		v = 0;
		cout << "1: Вариант #17" << endl; 
		cout << "2: Вариант #18" << endl;
		cout << "3: Вариант #19" << endl; 
		cout << "4: Вариант #20" << endl; 
		cout << "5: Вариант #21" << endl; 
		cout << "6: Вариант #22" << endl; 
		cout << "7: Вариант #23" << endl; 
		cout << "8: Вариант #24" << endl; 
		cout << "9: Вариант #25" << endl; 
		cout << "0: Назад..." << endl;
		cout << "Q: Вернуться в меню" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	M_Main(vbr);
	while (true)
	{
		if (!flag_list)
		{
			char key = _getch();
			if (key == 'q' || key == 'Q') {
				system("cls");
				cout << "До связи" << endl;
				break;
			}
			else if ((key >= '1' && key <= '5' && vbr != 2) || (key >= '1' && key <= '2' && vbr == 2))
			{
				list = 0;
				lab = lab + (key - '0');
				M_Variant(list);
				key = '0';
			}
			else if (key == '6' && vbr != 2)
			{
				vbr = vbr + 1;
				M_Main(vbr);
			}
			else if (key == '7' && vbr != 0) {
				vbr = vbr - 1;
				M_Main(vbr);
			}
			else {
				M_Main(vbr);
				cout << "\n\nНекоректная кнопка, попробуйте другую." << endl;
			}
		}
		if (flag_list) 
		{
			char key = _getch();
			if (key == 'q' || key == 'Q') {
				flag_list = false;
				vbr = 0;
				M_Main(vbr);
				key = '0';
			}
			else if (key >= '1' && key <= '8')
			{
				system("cls");
				M_Variant(list);
				v = ( list * 8 ) + (key - '0');
				Labs(lab, v);
			}
			else if (key == '9')
			{
				if (list == 2) {
					system("cls");
					M_Variant(list);
					v = (list * 8) + (key - '0');
					Labs(lab, v);
				}
				else {
					list = list + 1;
					M_Variant(list);
				}
			}
			else if (key == '0' && list != 0) 
			{
				list = list - 1;
				M_Variant(list);
			}
			else {
				M_Variant(list);
				cout << "\n\nНекоректная кнопка, попробуйте другую." << endl;
			}
		}
	}
	return 0;
}