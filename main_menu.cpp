#include <iostream>

using namespace std;

void press_to_continue() {
	cout << "\n\t\t������� ����� ������, ����� ����������..." << endl;
}
void M_Main()
{
	system("cls");
	cout << "=======================================================================================================\n" << endl;
	cout << "\t\t\t\t1. - ������� ��� (���� ����)" << endl;
	cout << "\t\t\t\t2. - ������� ������������ (������� 4)" << endl;
	cout << "\t\t\t\t3. - ���������� � ������������" << endl;
	cout << "\t\t\t\t4. - ������" << endl;
	cout << "\t\t\t\tQ. - ����� / �����" << endl;
	cout << "\n=======================================================================================================" << endl;

}
void M_Labs(int l_flag)
{
	system("cls");
	cout << "=======================================================================================================\n" << endl;
	if (l_flag == 1) {
		cout << "\t\t\t\t1. - ������������ #2" << endl;
		cout << "\t\t\t\t2. - ������������ #3" << endl;
		cout << "\t\t\t\t3. - ������������ #4" << endl;
		cout << "\t\t\t\t4. - ������������ #5" << endl;
		cout << "\t\t\t\t5. - ������������ #6" << endl;
		cout << "\t\t\t\t6. - ������������ #7" << endl;
		cout << "\t\t\t\t7. - ������������ #8" << endl;
		cout << "\t\t\t\t9. - �����..." << endl;
		cout << "\t\t\t\tQ. - ����� / �����" << endl;
	}
	else if (l_flag == 2) {
		cout << "\t\t\t\t1. - ������������ #9" << endl;
		cout << "\t\t\t\t2. - ������������ #10" << endl;
		cout << "\t\t\t\t3. - ������������ #11" << endl;
		cout << "\t\t\t\t4. - ������������ #12" << endl;
		cout << "\t\t\t\t8. - �����..." << endl;
		cout << "\t\t\t\tQ. - ����� / �����" << endl;
	}
	cout << "\n=======================================================================================================" << endl;
}
void InformationOwn()
{
	system("cls");

	cout << "=======================================================================================================\n" << endl;
	cout << "\t\t\t\t������ ���� ���������:" << endl;
	cout << "\t\t\t\t�.�.�. �������: ������������ ����� ��������" << endl;
	cout << "\t\t\t\t������ �������: ��-319" << endl;
	cout << "\t\t\t\t����� �������� ������: #101230104" << endl;
	cout << "\t\t\t\t������� ���������� �������: 4" << endl;
	cout << "\n=======================================================================================================" << endl;

}
void OpenLinks() {
	system("cls");

	cout << "=======================================================================================================\n" << endl;
	cout << "\t\t\t\t1. - GitHub" << endl;
	cout << "\t\t\t\t2. - ������� �������" << endl;
	cout << "\t\t\t\t3. - VK" << endl;
	cout << "\t\t\t\t4. - ���" << endl;
	cout << "\t\t\t\tQ. - ����� / �����" << endl;
	cout << "\n=======================================================================================================" << endl;

}