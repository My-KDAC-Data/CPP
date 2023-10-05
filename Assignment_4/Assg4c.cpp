/* Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write
parameter-less constructor. Write accept() and print() functions.
Also provide add(), subtract(), multiply() and transpose() function. */

#include <iostream>
using namespace std;

class Matrix
{

    int r;
    int c;
    int **mat;

public:
    Matrix()
    {
        this->r = 0;
        this->c = 0;
    }

    Matrix(int r, int c)
    {

        this->r = r;
        this->c = c;
        mat = new int *[r]; // allocate 1st dim

        for (int i = 0; i < r; i++) // allocate memory for each row ptr
            mat[i] = new int[c];    // allocate 2nd dim

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                mat[i][j] = 0;
            }
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < r; i++)
            delete[] mat[i]; // Deallocate memory for each row
        delete[] mat;        // Deallocate memory for rows
        mat = NULL;          // Set mat to nullptr after deallocation
    }

    void accept()
    {

        cout << "Enter Matrix :\n ";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "mat[" << i << "]"
                     << "[" << j << "] : \t";
                cin >> mat[i][j];
            }
            cout << "\n";
        }
    }

    void print()
    {

        cout << "\n Matrix is : \n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "mat[" << i << "]"
                     << "[" << j << "] : ";
                cout << mat[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    void add(Matrix m2)
    {
        Matrix res(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                res.mat[i][j] = this->mat[i][j] + m2.mat[i][j];
            }
        }
        cout << "\nAddition  ";
        res.print();
    }
    void subtract(Matrix m2)
    {
        Matrix res(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                res.mat[i][j] = this->mat[i][j] - m2.mat[i][j];
            }
        }
        cout << "\nResultant Subtraction ";
        res.print();
    }

    void mult(Matrix m2)
    {
        if (c != m2.r)
        {
            cout << "Multiplication is not possible due to incompatible dimensions.\n";
            return;
        }

        Matrix res(r, m2.c); // Allocate memory for the result matrix 'res'

        for (int i = 0; i < r; i++) // Loop through rows of the first matrix
        {
            for (int j = 0; j < m2.c; j++) // Loop through columns of the second matrix
            {
                int temp = 0;
                for (int k = 0; k < c; k++) // Loop to perform the dot product
                {
                    temp += mat[i][k] * m2.mat[k][j];
                }
                res.mat[i][j] = temp;
            }
        }

        cout << "\n Resultant Multiplication ";
        res.print();
    }

    void transpose()
    {
        Matrix res(c, r);

    // Assigning values accordingly. 
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            res.mat[j][i] = mat[i][j];
        }
    }
        cout << "Resultant Transpose of matrix m1";
        res.print();
    }



    
};

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter Matrix dimensions r and c: \n";
    cin >> r1 >> c1;
    Matrix m1(r1, c1);
    m1.accept();
    m1.print();

    cout << "Enter Matrix dimensions r and c: \n";
    cin >> r2 >> c2;
    Matrix m2(r2, c2);
    m2.accept();
    m2.print();

    m1.add(m2);
    m1.subtract(m2);
    m1.transpose();
    m1.mult(m2);

    return 0;
}