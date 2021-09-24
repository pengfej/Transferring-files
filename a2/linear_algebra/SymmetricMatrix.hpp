#ifndef __Math8650_SymmetricMatrix_HPP__
#define __Math8650_SymmetricMatrix_HPP__

#include <cassert>
#include <iostream>

#include "Matrix.hpp"

namespace math8650
{

class SymmetricMatrix
  :
  public Matrix
{
public:

  SymmetricMatrix() {}

  SymmetricMatrix(std::size_t n_rows, std::size_t n_cols, const double val = 0.0);
  
  SymmetricMatrix(std::size_t n, const double val = 0.0);
  
  virtual ~SymmetricMatrix();
  
  double& operator()(std::size_t i, std::size_t j) override;
  double operator()(std::size_t i, std::size_t j) const override;
  
  void getDiagonal(DenseVector& vec) const override;
  
  friend std::ostream& operator<<(std::ostream& out, const SymmetricMatrix& mat)
  {
    for (std::size_t i = 0; i < mat.m_rows; ++i)
    {
      for (std::size_t j = 0; j < mat.m_cols; ++j)
        out << mat(i,j) << " ";
      out << std::endl;
    }
    return out;
  }  
  
private:

  void allocate(std::size_t n);
  void deallocate();
  
  // matrix entries
  double** m_mat;
};

}
// end namespace math8650

#endif /** __Math8650_SymmetricMatrix_HPP__ */
