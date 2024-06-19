#include "matrix.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os,  const math::Matrix &M) 
   {
      for (int i = 0; i < M.get_n_row(); ++i)
      {
         for (int j = 0; j < M.get_n_col(); ++j)

         os << M(i, j) << " ";

         os << std::endl;
      }

      return os;
   }

   std::istream &  operator>>(std::istream &in, math::Matrix &M(int row, int col))
{

   in >> *M;

   return in;
}


int main()
{
    math::Matrix m(3, 3);
    m(0, 0) = 1;
    m(1, 1) = 1;

    math::Matrix m1(3, 3);
    m1(0, 0) = 5;
    m1(1, 1) = 5;

    std::cout << "Matrix m is: " << std::endl;
    m.print();

    std::cout << "Matrix m1 is: " << std::endl;
    m1.print();

    math::Matrix m2 = m + m1;
    std::cout << std::endl
              << "Sum of m1 and m is: " << std::endl;

    m2.print();

    math::Matrix m3 = m - m1;
    std::cout << std::endl
              << "Sub of m1 and m is: " << std::endl;

    m3.print();

    std::cout << std::endl
              << "SMultiplication of  matrices m1 and m is: " << std::endl;
    math::Matrix m4 = m1 * m;
    m4.print();

    // перегруженый оператор +=
    std::cout << std::endl
              << "operator += of  matrices m and m1 is: " << std::endl;
    m += m1;
    m.print();
    std::cout << "Created matrix m5(3,3)" << std::endl;
    math::Matrix m5(3, 3);
    m5(0, 0) = 1;
    m5(1, 1) = 1;
    std::cout << "Created matrix m6(3,4)" << std::endl;
    math::Matrix m6(3, 4);
    std::cout << std::endl
              << "operator -= of  matrices m5 and m6 is: " << std::endl;
    m5 -= m6;
    std::cout << "Matrix m" << std::endl;

    m.print();
    std::cout << "Matrix m1" << std::endl;
    m1.print();

    m -= m1;
    std::cout << std::endl
              << "operator -= of  matrices m and m1 is: " << std::endl;
    m.print();

    m *= m1;
    std::cout << std::endl
              << "operator *= of  matrices m and m1 is: " << std::endl;
    m.print();
    std::cout << std::endl
              << "operator << overloaded  is: " << std::endl;
    std::cout << m << std::endl;

    std::cout << std::endl
              << "Entered m(2,2): " << std::endl;
    std::cin >> m(2,2);
    std::cout << std::endl
              << "operator >> overloaded  is: " << std::endl;
     std::cout << m << std::endl;
     std::cout << std::endl
              << "Entered m(1,2): " << std::endl;
     std::cin >> m(1,2);
     std::cout << m << std::endl;

    

    return 0;


    
}
