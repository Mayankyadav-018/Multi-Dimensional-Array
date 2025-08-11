/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 5/8/2025   */
#include <iostream>
using namespace std;

int main(){
    int rows,columns;
    cout << "Enter no of rows:";
    cin >> rows;
    cout << "Enter no of columns:";
    cin >> columns;
    
    int m[50][50];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << "Element {" << i << "}" << "{" << j << "} :";
            cin >> m[i][j];
        }
    }
    cout << "Matrix:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



/* OUTPUT
Enter no of rows:3
Enter no of columns:2
Element {0}{0} :7
Element {0}{1} :9
Element {1}{0} :2
Element {1}{1} :5
Element {2}{0} :7
Element {2}{1} :1
Matrix:
79
25
71 */
