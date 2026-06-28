# codalpha_tasks
SIMPLE CALCULATOR IN C

 Project Description

This is a simple calculator program written in C. It performs basic arithmetic operations using a switch-case statement.

The calculator supports:

-  Addition
-  Subtraction
-  Multiplication
-  Division (with division-by-zero handling)

 Features

- User-friendly console interface
- Uses "switch-case" for operation selection
- Accepts floating-point numbers
- Prevents division by zero
- Simple and easy-to-understand code

 Technologies Used

- Programming Language: C
- Standard Library: "stdio.h"

 How to Run

1. Save the code as "calculator.c".
2. Compile the program:
   gcc calculator.c -o calculator
3. Run the executable:
   ./calculator

 Sample Output

Enter first number: 10
Enter second number: 5

Select Operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter choice (1-4): 3

Result = 50.00

 Concepts Used

- Variables
- Input/Output ("scanf", "printf")
- Switch Case
- Conditional Statements ("if-else")
- Arithmetic Operators

 Future Improvements

- Add modulus (%) operation
- Support multiple calculations without restarting
- Improve input validation
- Add scientific calculator functions



---

2.MATRIX OPERATIONS IN C

 Project Description

This project is a C program that performs basic matrix operations. The user enters two matrices of the same size, and the program performs the following operations:

-  Matrix Addition
-  Matrix Multiplication
-  Transpose of Matrix A

 Features

- Accepts user-defined matrix size.
- Performs matrix addition.
- Performs matrix multiplication.
- Displays the transpose of the first matrix.
- Uses separate functions for each operation.

 Technologies Used

- Language: C
- Library: "stdio.h"

 How to Run

1. Save the program as "matrix_operations.c".
2. Compile the program:
   gcc matrix_operations.c -o matrix_operations
3. Run the program:
   ./matrix_operations

 Sample Output

Enter rows and columns of matrices: 2 2

Enter elements of Matrix A:
1 2
3 4

Enter elements of Matrix B:
5 6
7 8

Matrix Addition:
6 8
10 12

Matrix Multiplication:
19 22
43 50

Transpose Matrix:
1 3
2 4

 Concepts Used

- Functions
- Arrays (2D Arrays)
- Matrix Operations
- Loops ("for")
- User Input/Output
- Variable Length Arrays (VLA)

 Future Improvements

- Matrix subtraction
- Matrix determinant
- Matrix inverse
- Matrix comparison
- Menu-driven interface

----------

3.STUDENT MANAGEMENT SYSTEM IN C
Student Management System in C

 Project Description

The Student Management System is a console-based application written in C that manages student records using file handling. It allows users to add, display, search, update, and delete student records stored in a binary file.

 Features

-  Add new student records
-  Display all student records
-  Search student by roll number
-  Update student details
-  Delete student records
-  Stores data using file handling ("students.dat")

 Technologies Used

- Programming Language: C
- Libraries: "stdio.h", "stdlib.h", "string.h"
- Concepts: Structures, Functions, File Handling

How to Run

1. Save the code as "student_management.c".
2. Compile the program:
   gcc student_management.c -o student_management
3. Run the program:
   ./student_management

 Sample Menu

===== Student Management System =====
1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Exit
Enter your choice:

 Concepts Used

- Structures ("struct")
- File Handling ("fopen", "fread", "fwrite", "fseek")
- Functions
- Loops
- Conditional Statements
- Binary Files

 Future Improvements

- Add login authentication
- Sort student records
- Calculate grades automatically
- Export records to CSV
- Improve user interface

 Author

Laxmi Priya Nayak

---


