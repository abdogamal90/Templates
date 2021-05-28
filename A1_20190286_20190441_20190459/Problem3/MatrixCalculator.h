#include <iostream>

using  namespace std;

template <typename T>
class Matrix{
private:
    int rows;
    int cols;
    T** info;

public:
    Matrix();
    Matrix(int rows,int cols);
    Matrix(const Matrix<T>& moo);
    friend istream& operator>> (istream& in, Matrix<T>& mat1);

    friend ostream& operator<< (ostream& out, const Matrix<T>& mat2);


    Matrix<T> operator+(Matrix<T> & mat2);


    Matrix<T> operator-(Matrix<T> &mat2);


    Matrix<T> operator*(Matrix<T> &mat2);

    friend Matrix<T>& transpose(Matrix<T>& mat);

};

