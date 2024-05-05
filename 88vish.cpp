#include <iostream>

using namespace std;

// funtion to scan matrix
int **input_matrix(int row, int column)
{
    int **temp_matrix;

    cout << "Enter the matrix " << endl;
    temp_matrix = new int *[row];

    for (int r = 0; r < row; r++)
    {

        temp_matrix[r] = new int[column];
        for (int c = 0; c < column; c++)
        {
            cin >> temp_matrix[r][c];
        }
    }

    return temp_matrix;
}

// function to display matrix
void display_matrix(int **temp_matrix, int row, int column)
{

    cout << "The matrix is" << endl;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            cout.width(4);
            cout << temp_matrix[r][c] << " ";
        }
        cout << endl;
    }
}
// funtion to add matrix

void add_matrix()
{

    int row;
    int column;
    cout << "Enter the number of rows and column ( row , column )";
    cin >> row;
    cin >> column;

    int **matrix_a;
    int **matrix_b;
    int **matrix_sum;

    matrix_a = input_matrix(row, column);
    matrix_b = input_matrix(row, column);

    matrix_sum = new int *[row];

    for (int r = 0; r < row; r++)
    {
        matrix_sum[r] = new int[column];
        for (int c = 0; c < column; c++)
        {
            matrix_sum[r][c] = matrix_a[r][c] + matrix_b[r][c];
        }
    }

    display_matrix(matrix_sum, row, column);
}

// function to substract to matrix
void subtract_matrix()
{

    int row;
    int column;
    cout << "Enter the number of rows and column ( row , column )";
    cin >> row;
    cin >> column;

    int **matrix_a;
    int **matrix_b;
    int **matrix_diff;

    matrix_a = input_matrix(row, column);
    matrix_b = input_matrix(row, column);

    matrix_diff = new int *[row];

    for (int r = 0; r < row; r++)
    {
        matrix_diff[r] = new int[column];
        for (int c = 0; c < column; c++)
        {
            matrix_diff[r][c] = matrix_a[r][c] - matrix_b[r][c];
        }
    }

    display_matrix(matrix_diff, row, column);
}

// function to find determinant of matrix

int determinant()
{

    int size_of_matrix;
    cin >> size_of_matrix;

    int **matrix;
    matrix = input_matrix(size_of_matrix, size_of_matrix);
}

// function to find multiplicatin of matrix
void multiply_matrix()
{

    int row_A, row_B;       // A denotes matrix A;
    int column_A, column_B; // B denotes matrix B
    cout << "Enter the number of rows and column of matrix A( row , column )";
    cin >> row_A;
    cin >> column_A;

    cout << "Enter the number of rows and column of matrix B( row , column )";
    cin >> row_B;
    cin >> column_B;

    /* condition to check whether
     * matrix multiplication is
     * possible or not
     */

    if (column_A != row_B)
    {
        cout << endl
             << "\t\tMatrix multiplication is not possible" << endl;
        return;
    }

    int **matrix_a;
    int **matrix_b;
    int **matrix_mul;

    matrix_a = input_matrix(row_A, column_A);
    matrix_b = input_matrix(row_B, column_B);

    matrix_mul = new int *[row_A];

    for (int r = 0; r < row_A; r++)
    {
        matrix_mul[r] = new int[column_B];
        for (int c = 0; c < column_B; c++)
        {
            matrix_mul[r][c] = 0; // Initializing to Zero to store the answer in it

            for (int i = 0; i < column_A; i++)
            {
                matrix_mul[r][c] += matrix_a[r][i] * matrix_b[i][c];
            }
        }
    }

    display_matrix(matrix_mul, row_A, column_B);
}

int main()
{

    int choice;
    cout << "Enter the choice. Press" << endl;
    cout << "1 : Matrix Addition" << endl;
    cout << "2 : Matrix Substraction" << endl;
    cout << "3 : Matrix Multiplication" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:

        add_matrix();
        break;

    case 2:

        subtract_matrix();
        break;

    case 3:

        multiply_matrix();
        break;
    }
}