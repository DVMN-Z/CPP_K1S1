#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int main()
{   
    setlocale(LC_ALL, "russian");

    int flag, flag_check = 0;
    int matrix1[6][6], matrix2[6][6];

    cout << "\n\tНажмите любую кнопку чтобы продолжить..." << endl;
    _getch(); flag = 1;

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
            else if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
                return 0;
            }
        }
        else if (flag == 2 || flag == 3) {
            int sum = 0;
            if (flag_check == 0) {

                if (flag == 2) {
                    generate_matrix_i(matrix1);
                }
                else if (flag == 3) {
                    generate_matrix_r(matrix1);
                }

                find_otr(matrix1, sum);
                p_fstring(matrix1, matrix2);

            }

            matrixs_out(matrix1, matrix2, sum);
            flag_check = 1;
            char key = _getch();
            if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
                flag_check = 0;
                flag = 1;
            }
        }
        else if (flag == 4) {
            Information();
            char key = _getch();
            if (key == 'q' || key == 'Q' || key == '©' || key == '‰') {
                flag = 1;
            }
        }
    }
}