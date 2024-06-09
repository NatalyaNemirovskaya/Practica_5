#pragma once
#include <vector>

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

    void print();
     
    } ;
} //namespace math