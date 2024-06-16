#pragma once
#include <vector>
#include <iostream>

namespace math
{
    typedef double real;
    class Matrix
    {
    private:
    int cols_;
    int rows_;
    std::vector<real> mvec_;

    public:
     Matrix(){};

     Matrix(int rows, int cols): rows_(rows),cols_(cols), mvec_(std::vector<real>(cols*rows))
     {

     };
     
    real& operator()(int row, int col);

    real  operator()(int row, int col) const;

    void print();

    friend Matrix operator+(const Matrix& A, const Matrix& B);

    
    friend Matrix operator-(const Matrix& A, const Matrix& B); 

    friend Matrix operator*(const Matrix& A, const Matrix& B); 

     Matrix& operator+=(const Matrix& M); // перегрузка оператора +=

     Matrix& operator-=(const Matrix& M); // перегрузка оператора -=

     Matrix& operator*=(const Matrix& M); // перегрузка оператора *=

     friend std::ostream& operator<<(std::ostream& out, const Matrix& M); //перегрузка оператора <<

      //friend std::istream& operator>>(std::istream& in,  Matrix& M) ; //перегрузка оператора <<

       friend std::istream& operator>>(std::istream& in,  math::Matrix& M(int row, int col)) ; //перегрузка оператора <<


    } ;
} //namespace math