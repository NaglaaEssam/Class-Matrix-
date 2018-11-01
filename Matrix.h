#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;

class Matrix
{
    public:
        Matrix(int,int);
        ~Matrix(); //destructor
		Matrix& operator+= (Matrix& mat2);
        Matrix& operator-= (Matrix& mat2);
        Matrix& operator+= (int scalar);   // change mat & return new matrix
        Matrix& operator-= (int scalar);   // change mat & return new matrix
        void   operator++  ();   	// Add 1 to each element ++mat
        void   operator--  ();
        Matrix operator+   (Matrix mat2); // Add if same dimensions
        Matrix operator-   (Matrix mat2); // Sub if same dimensions
        Matrix operator*   (Matrix mat2); // Multi if col1 == row2
        Matrix operator+   (int scalar);  // Add a scalar
        Matrix operator-   (int scalar);  // Subtract a scalar
        Matrix operator*   (int scalar);  // Multiple by scalar
        bool   operator==  (Matrix mat2);	// True if identical
        bool   operator!=  (Matrix mat2); 	// True if not same
        bool   isSquare    ();  // True if square matrix
        bool   isSymetric  ();  // True if square and symmetric
        bool   isIdentity  ();  // True if square and identity
        Matrix transpose   ();    // Return new matrix with the transpose
        friend istream& operator>>(istream& , Matrix& );
        friend ostream& operator<<(ostream& , Matrix );
    private:
        int** data;       // Pointer to 2-D array that will simulate matrix
        int row,col;



};

#endif // MATRIX_H
