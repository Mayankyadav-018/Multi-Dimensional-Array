/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 5/8/2025   */
#include <iostream>
using namespace std;

int main() {
    int r1,r2,c1,c2;
    cout << "Enter number of rows of 1st matrix:";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix:";
    cin >> c1;
    cout << "Enter number of rows of 2nd matrix:";
    cin >> r2;
    cout << "Enter number of columns of 2nd matrix:";
    cin >> c2;
    
    int m1[50][50],m2[50][50],result[50][50];
    
    
    if(c1==c2 && r1==r2){
        for(int i = 0; i<r1 ; i++){
            for(int j = 0; j<c1 ; j++){
                cout << "Element {" << i << "}" << "{" << j << "} :";
            cin >> m1[i][j];
        }
    }   cout << endl;
        cout << "First Matrix:" << endl;
        for(int i=0;i<r1;i++){
           for(int j=0;j<c1;j++){
               cout << m1[i][j] << " ";
        }
        cout << endl;
    }for(int i = 0; i<r2 ; i++){
            for(int j = 0; j<c2 ; j++){
                cout << "Element {" << i << "}" << "{" << j << "} :";
            cin >> m2[i][j];
        }
    }   cout << endl;
        cout << "Second Matrix:" << endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
               cout << m2[i][j] << " ";
        }
        cout << endl;
    }       
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                result[i][j] = m1[i][j] + m2[i][j];
            }
        }
        cout << endl;
        
        cout << "Sum of matrix:" << endl;;
        
        for(int i=0;i<r1;i++){
           for(int j=0;j<c1;j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    }
    else{
    cout << "The entered dimensions for matrix doesn't match.";
    }
    return 0;
    }


/* OUTPUT
Enter number of rows of 1st matrix:2
Enter number of columns of 1st matrix:3
Enter number of rows of 2nd matrix:2
Enter number of columns of 2nd matrix:3
Element {0}{0} :2
Element {0}{1} :4
Element {0}{2} :6
Element {1}{0} :8
Element {1}{1} :3
Element {1}{2} :5

First Matrix:
2 4 6 
8 3 5 
Element {0}{0} :1
Element {0}{1} :3
Element {0}{2} :6
Element {1}{0} :3
Element {1}{1} :7
Element {1}{2} :9

Second Matrix:
1 3 6 
3 7 9 

Sum of matrix:
3 7 12 
11 10 14 
 */
