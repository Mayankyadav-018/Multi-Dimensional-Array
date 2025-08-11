# EXPERIMENT NO - 08

* Aim: To explore and implement Multi-Dimensional Arrays in C++ for structured data storage and manipulation.

* Tools Used: IDE, nested loops, array indexing, operators, etc.

* Theory:

In C++, multi-dimensional arrays are used to store data in a tabular form (rows and columns) or higher dimensions. The most common type is the two-dimensional array, which can be visualized like a matrix. These arrays are useful for representing data such as game boards, tables, or pixel grids.

🔹 1.*Multi-Dimensional Arrays in C++:*

A multi-dimensional array is essentially an array of arrays, allowing storage of data in a table-like structure. The most common type is the two-dimensional array, which organizes elements in rows and columns for easy representation of matrices or grids. Multi-dimensional arrays are useful for solving problems involving structured data, such as tables, game boards, or image pixels.

* Elements are accessed using multiple indices.

* The first index refers to the row, and the second to the column.

* Useful for matrix operations, tables, and data mapping.

🔸 Syntax:

    int arr[3][4]; // 3 rows, 4 columns
    
🔸 Usage:

* Store tabular data like marks, grids, or coordinates

* Access elements using arr[row][column]

* Typically used with nested loops for traversal

🔸 Example:


    int matrix[2][3] = {
       {1, 2, 3},
       {4, 5, 6}
    };

     for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
           cout << matrix[i][j] << " ";
        }   
       cout << endl;
     }
🔹 2.*Higher Dimensional Arrays:*

3D arrays: Useful for storing data in the form of layers or cubes

🔸Syntax:


    int cube[3][4][5];
    
Accessed using three indices: cube[x][y][z]

# Take Matrix Input from user and Display it:

This program takes a two-dimensional matrix as input from the user and displays it in a structured format. It first prompts for the number of rows and columns, stores elements in a 2D array, and then prints the matrix using nested loops.

*ALGORITHM:*

1> Start

2> Declare variables:

* rows, columns (int) – to store matrix dimensions

* m[50][50] (int 2D array) – to store matrix elements

3> Prompt the user and take input:

* Ask for number of rows → store in rows

* Ask for number of columns → store in columns

4> Input matrix elements:

* Use nested for loops:

* Outer loop → iterate over rows

* Inner loop → iterate over columns

* Store each element in m[i][j]

5> Display the matrix:

* Use nested for loops:

* Outer loop → iterate over rows

* Inner loop → print each element followed by a space

* After each row, print a newline

6> End

# Addition of Two Matrix:

This program takes two matrices as input from the user and adds them together if their dimensions match. It first checks if the number of rows and columns in both matrices are the same, then uses nested loops to store and display each matrix, compute the sum, and finally display the resulting matrix.

*ALGORITHM:*

1> Start

2> Declare variables:

* r1, c1 (int) – rows and columns of the first matrix

* r2, c2 (int) – rows and columns of the second matrix

* m1[50][50], m2[50][50] (int 2D arrays) – to store matrix elements

* result[50][50] (int 2D array) – to store the sum

3> Prompt the user and take input for dimensions:

* Input rows and columns of first matrix → r1, c1

* Input rows and columns of second matrix → r2, c2

4> Check if dimensions match:

* If (r1 == r2) and (c1 == c2) → proceed

* Else → display "The entered dimensions for matrix doesn't match." and stop

5> Input elements of first matrix:

* Use nested for loops to store values in m1[i][j]

6> Display first matrix:

* Use nested for loops to print m1

7> Input elements of second matrix:

* Use nested for loops to store values in m2[i][j]

8> Display second matrix:

* Use nested for loops to print m2

9> Add corresponding elements:

* For each i, j → result[i][j] = m1[i][j] + m2[i][j]

10> Display sum matrix:

* Use nested for loops to print result

11> End

# Multiplication of two Matrices:

This program takes two matrices as input from the user and multiplies them if the number of columns in the first matrix matches the number of rows in the second matrix. It first stores the elements of both matrices using nested loops, displays them, performs the multiplication using a triple nested loop, and finally displays the resulting product matrix.

*ALGORITHM:*

1> Start

2> Declare variables:

* m1[50][50], m2[50][50] (int 2D arrays) → to store matrix elements

* result[50][50] (int 2D array) → to store the multiplication result

3> Input dimensions:

* Prompt and read r1, c1 (first matrix)

* Prompt and read r2, c2 (second matrix)

4> Check multiplication condition:

* If c1 == r2 → proceed

* Else → display "The entered dimensions for matrix doesn't match." and stop

5> Input elements of first matrix:

* Use nested for loops to read m1[i][j]

6> Display first matrix

7> Input elements of second matrix:

* Use nested for loops to read m2[i][j]

8> Display second matrix

9> Initialize result matrix to 0

10> Multiply matrices:

* Use triple nested loops:

* For each i in rows of first matrix

* For each j in columns of second matrix

* For each k in columns of first matrix (or rows of second matrix)

* result[i][j] += m1[i][k] * m2[k][j]

11> Display product matrix

12> End

# Diagonal Addition:

This program reads two matrices of the same dimensions and computes the sum of their primary diagonal elements. It first validates that both matrices have identical dimensions, then inputs and displays each matrix, and finally sums elements where row index equals column index for each matrix.

ALGORITHM:

1> Start

2> Declare variables:

3> Input matrix dimensions:

* Read r1, c1 for first matrix

* Read r2, c2 for second matrix

4> Check dimensions:

* If (r1 == r2 and c1 == c2) → proceed

* Else → display "The entered dimensions for matrix don't match." and End

5> Input elements of first matrix:

* Use nested loops to read m1[i][j] for i = 0..r1-1, j = 0..c1-1

6> Display first matrix:

* Use nested loops to print m1[i][j]

7> Input elements of second matrix:

* Use nested loops to read m2[i][j] for i = 0..r2-1, j = 0..c2-1

8> Display second matrix:

* Use nested loops to print m2[i][j]

9> Compute diagonal sums:

* For i = 0 to r1 - 1: result1 += m1[i][i]

* For i = 0 to r2 - 1: result2 += m2[i][i]

10> Display results:

* Print "Sum of diagonal elements of 1st matrix: " followed by result1

* Print "Sum of diagonal elements of 2nd matrix: " followed by result2

11> End

# Transpose Matrix:

A transpose of a matrix is formed by turning its rows into columns and columns into rows. If an element is at position (i, j) in the original matrix, it will move to position (j, i) in the transposed matrix. This concept is widely used in mathematical operations, computer graphics, and solving systems of equations.

*ALGORITHM:*

1> Start

2> Declare variables:
* rows, columns (int) – for storing matrix dimensions
* m[50][50] (int 2D array) – for storing matrix elements

3> Input number of rows and columns from the user

4> Using nested loops, read matrix elements into m[i][j]

5> Display the original matrix using nested loops

6> Display the transpose of the matrix by printing m[j][i] in nested loops

7> End

# Compare elements of first row to second row:

This program reads a matrix from the user and checks if any elements in the first row match with the corresponding elements in the second row. The matrix is displayed first for reference. Then, the program compares each element of the first row with the element in the same column of the second row. If at least one match is found, a confirmation message is displayed; otherwise, it reports that no matches exist.

*ALGORITHM:*

1> Start

2> Declare variables:

3> Input number of rows and columns from the user

4> Using nested loops, read matrix elements into m[i][j]

5> Display the matrix using nested loops

6> Initialize matchFound to false

7> Compare elements of first row and second row:

* Loop through each column j
  
* If m[0][j] == m[1][j], set matchFound = true and break the loop

8> If matchFound is true, display "Elements of first row match the elements of second row"
Else display "No elements match between the first and second row"

9> End

# Conclusion:

This experiment demonstrates how to create, store, and process data using multidimensional arrays in C++. We learned to perform various operations such as input/output of matrix elements, finding sums of diagonals, comparing rows, and generating transposes. It reinforced concepts of nested loops, index referencing, and logical conditions, providing a strong foundation for handling structured tabular data efficiently.






