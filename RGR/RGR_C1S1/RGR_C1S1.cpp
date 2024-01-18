#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int main()
{   
    setlocale(LC_ALL, "russian");

    int flag = 1, flag_check = 0, matrix1[6][6], matrix2[6][6];

    cout << "\n\tНажмите любую кнопку чтобы продолжить..." << endl;
    _getch();

    while (1) {
        if (flag == 1) {
            M_Menu();
            char key = _getch();
            if (key == '1') {
                flag = 2;
            }
            else if (key == '2') {
                flag = 3;
            }
            else if (key == '3') {
                flag = 4;
            }
            else if (key == '4') {
                flag = 5;
            }
            else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
                return 0;
            }
        }
        else if (flag == 2 || flag == 3 || flag == 4) {
            if (flag_check == 0) {

                if (flag == 2) {
                    generate_matrix_i(matrix1);
                }
                else if (flag == 3) {
                    generate_matrix_r(matrix1);
                }
                else if (flag == 4) {
                    system("cls");
                    cout << "\n\tПрежде чем продолжить:" << endl;
                    cout << "\n\tФайл должен находиться по пути: C:\\RGR\\ и иметь название numbers.txt" << endl;
                    
                    cout << "\n\n\t\tНажмите любую кнопку чтобы продолжить..." << endl;
                    _getch();
                    system("cls");
                    generate_matrix_readfile(matrix1);
                    cout << "\n\n\t\tНажмите любую кнопку чтобы продолжить..." << endl;
                    _getch();
                }

                p_fstring(matrix1, matrix2);

            }

            system("cls");
            cout << "==========================================================================\n" << endl;
            cout << "\tПервородная матрица:" << endl;
            matrixs_out(matrix1);
            cout << "\n\tМатрица с выполнеными задачами:" << endl;
            matrixs_out(matrix2);
            cout << "\nСумма отрицательных чисел в первообразной матрице: " << find_otr(matrix1) << endl;
            cout << "Сумма отрицательных чисел в преобразованной матрице: " << find_otr(matrix2) << endl;
            cout << "\n==========================================================================" << endl;
            cout << "\n\tQ. - Вернуться в главное меню" << endl;

            
            flag_check = 1;
            char key = _getch();
            if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
                flag_check = 0;
                flag = 1;
            }
        }   
        else if (flag == 5) {
            Information();
            char key = _getch();
            if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
                flag = 1;
            }
        }
    }
}