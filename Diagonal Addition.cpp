/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 5/8/2025   */
#include <iostream>
using namespace std;

int main() {
    int r1, r2, c1, c2;
    cout << "Enter number of rows of 1st matrix: ";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix: ";
    cin >> c1;
    cout << "Enter number of rows of 2nd matrix: ";
    cin >> r2;
    cout << "Enter number of columns of 2nd matrix: ";
    cin >> c2;

    int m1[50][50], m2[50][50];
    int result1 = 0, result2 = 0;

    if (c1 == c2 && r1 == r2) {
        
        cout << "\nEnter elements of first matrix:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> m1[i][j];
            }
        }

        
        cout << "\nFirst Matrix:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << m1[i][j] << " ";
            }
            cout << endl;
        }

        
        cout << "\nEnter elements of second matrix:\n";
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> m2[i][j];
            }
        }

        
        cout << "\nSecond Matrix:\n";
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << m2[i][j] << " ";
            }
            cout << endl;
        }

        
        for (int i = 0; i < r1; i++) {
            result1 += m1[i][i];
        }
        for (int i = 0; i < r2; i++) {
            result2 += m2[i][i];
        }

        cout << "\nSum of diagonal elements of 1st matrix: " << result1 << endl;
        cout << "Sum of diagonal elements of 2nd matrix: " << result2 << endl;

    } else {
        cout << "The entered dimensions for matrix don't match.\n";
    }

    return 0;
}

    

/* OUTPUT
Enter number of rows of 1st matrix: 2
Enter number of columns of 1st matrix: 2
Enter number of rows of 2nd matrix: 2
Enter number of columns of 2nd matrix: 2

Enter elements of first matrix:
Element [0][0]: 1
Element [0][1]: 2
Element [1][0]: 3
Element [1][1]: 4

First Matrix:
1 2
3 4

Enter elements of second matrix:
Element [0][0]: 5
Element [0][1]: 6
Element [1][0]: 7
Element [1][1]: 8

Second Matrix:
5 6
7 8

Sum of diagonal elements of 1st matrix: 5
Sum of diagonal elements of 2nd matrix: 13

 */
