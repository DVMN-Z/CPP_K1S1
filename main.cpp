#include <iostream>
#include <conio.h>
#include "include_cpp.h"

using namespace std;

int l_flag = 1, m_flag, r_vrnt, hide = 0, pause = 0;

void M_Main()
{
	cout << "1. - ������� ���" << endl;
	cout << "2. - ������� ������������ (������� 4)" << endl;
	cout << "3. - ���������� � ������������" << endl;
	cout << "4. - ������" << endl;
	cout << "Q. - ����� / �����" << endl;
}

void M_Labs(int l_flag, int pause)
{
	if (pause != 1) {
		if (l_flag == 1) {
			cout << "1. - ������������ #2" << endl;
			cout << "2. - ������������ #3" << endl;
			cout << "3. - ������������ #4" << endl;
			cout << "4. - ������������ #5" << endl;
			cout << "5. - ������������ #6" << endl;
			cout << "6. - ������������ #7" << endl;
			cout << "7. - ������������ #8" << endl;
			cout << "9. - �����..." << endl;
			cout << "Q. - ����� / �����" << endl;
		}
		else if (l_flag == 2) {
			cout << "1. - ������������ #9" << endl;
			cout << "2. - ������������ #10" << endl;
			cout << "3. - ������������ #11" << endl;
			cout << "4. - ������������ #12" << endl;
			cout << "8. - �����..." << endl;
			cout << "Q. - ����� / �����" << endl;
		}
	}
}

int main()
{
	m_flag = 1;
	setlocale(LC_ALL, "Russian"); // �� ����� ������� ����

	cout << "������� ������ ��� �����������..." << endl;
	_getch(); // ���������� ������� ������� � ����������
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
				else if (key == 'q' || key == 'Q' || key == '�' || key == '�') {
					system("cls"); // ������� �������
					return 0;
				}
				else {
					cout << "\n\n\n\n����������� ������� �������";
				}
			}
			else if (m_flag == 2) {
				system("cls");
				M_Labs(l_flag, pause);
				char key = _getch();

				if (key == 'q' || key == 'Q' || key == '�' || key == '�') {
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