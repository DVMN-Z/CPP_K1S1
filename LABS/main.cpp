#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>

#include "include_cpp.h"

using namespace std;

int l_flag = 1, m_flag, r_vrnt;

void openURL(string url) {
	string com = "start " + url;
	system(com.c_str());
}


int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "Russian");

	press_to_continue();
	_getch();
	m_flag = 1;
	while (1)
	{
		if (m_flag == 1) {
			M_Main();
			char key = _getch();

			if (key == '1') {
				m_flag = 3;
				M_Labs(l_flag);
			}
			else if (key == '2') {
				m_flag = 4;
			}
			else if (key == '3') {
				m_flag = 5;
			}
			else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
				system("cls");
				return 0;
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