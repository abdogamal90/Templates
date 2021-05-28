#include "MatrixCalculator.h"
using namespace std;
template<typename T>

Matrix<T>::Matrix(){
    rows = 0;
    cols = 0;
}
template<typename T>
Matrix<T>::Matrix(int rows,int cols){
    this->rows = rows;
    this->cols = cols;
    info = new T*[rows];
    for(int i = 0; i<rows;i++){
        info[i] = new T[cols];
    }
}

template<typename T>
istream& operator>> (istream& in, Matrix<T>& mat1){
    cin>>mat1.cols>>mat1.rows;
    mat1.info = new T* [mat1.rows];
    for (int i = 0; i<mat1.rows;i++){
        mat1.info = new T[mat1.col];   }
    for (int i = 0 ; i<mat1.rows;i++){
        for (int j = 0;j<mat1.cols;j++){
            in>> mat1.info[i][j];
        }
    }
}

template<typename T>
ostream& operator<< (ostream& out, const Matrix<T>& mat1){
    for (int i = 0; i<mat1.rows;i++){
        for (int j = 0;j<mat1.cols;j++){
            out<<mat1.info[i][j]<<endl;
        }
    }

}

template<typename T>
Matrix<T>::Matrix(const Matrix<T>& moo)
{
    this->cols = moo.col;
    this->rows = moo.row;
    this->info = new T*[rows];

    for (int i = 0; i < rows; i++)
        this->data[i] = new T[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            this->data[i][j] = moo.data[i][j];
}
template<typename T>
Matrix<T> operator+(Matrix<T> & mat2){
    Matrix<T> summation(mat2.rows,mat2.cols);
    for(int i=0;i<mat2.rows;i++)
    {
        for(int j=0;j<mat2.cols;j++)
        {
            summation.info[i][j]=mat2.info[i][j]+mat2.info[i][j];
        }
    }
    return summation;
    

}

template<typename T>

Matrix<T> operator-(Matrix<T> &mat2){
    Matrix<T> difference(mat2.rows,mat2.cols);
    for(int i=0;i<mat2.rows;i++)
    {
        for(int j=0;j<mat2.cols;j++)
        {
            difference.info[i][j]=mat2.info[i][j]-mat2.info[i][j];
        }
    }
    return difference;
}

template<typename T>

Matrix<T> operator*(Matrix<T> &mat2){
    Matrix<T> multiply(mat2.rows,mat2.cols);
    for(int i=0;i<mat2.rows;i++)
    {
        for(int j=0;j<mat2.cols;j++)
        {
            multiply.data[i][j]=0;
            for(int k=0;k<mat2.rows;k++)
            {
                multiply.info[i][j]+=mat2.info[i][k]*mat2.info[k][j];
            }
        }
    }
    return multiply;
}
template<typename T>
Matrix<T>& transpose(Matrix<T>& mat2){
    int rev = mat2.cols;
    mat2.cols=mat2.rows;
    mat2.rows=rev;

    for(int i=0;i<mat2.rows;i++)
    {
        for(int j=i;j<mat2.cols;j++)
        {
            T res=mat2.info[j][i];
            mat2.info[j][i] = mat2.info[i][j];
            mat2.info[i][j]=res;

        }
    }
}





