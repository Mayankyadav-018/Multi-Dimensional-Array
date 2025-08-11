/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 5/8/2025   */
#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter no of rows: ";
    cin >> rows;
    cout << "Enter no of columns: ";
    cin >> columns;
    
    int m[50][50];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Element {" << i << "}" << "{" << j << "} :";
            cin >> m[i][j];
        }
    }
    
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    bool matchFound = false;
    for (int j = 0; j < columns; j++) {
        if (m[0][j] == m[1][j]) {
            matchFound = true;
            break;
        }
    }
    
    if (matchFound) {
        cout << "Elements of first row match the elements of second row" << endl;
    } else {
        cout << "No elements match between the first and second row" << endl;
    }
    
    return 0;
}


    

/* OUTPUT
Enter no of rows: 3
Enter no of columns: 3
Element {0}{0} :1
Element {0}{1} :2
Element {0}{2} :3
Element {1}{0} :1
Element {1}{1} :2
Element {1}{2} :3
Element {2}{0} :4
Element {2}{1} :5
Element {2}{2} :6
Matrix:
1 2 3 
1 2 3 
4 5 6 
Elements of first row match the elements of second row
 */
