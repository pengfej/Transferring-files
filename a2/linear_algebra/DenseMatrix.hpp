#ifndef __Math8650_DenseMatrix_HPP__
#define __Math8650_DenseMatrix_HPP__

#include <cassert>
#include <iostream>

#include "Matrix.hpp"

namespace math8650
{

class DenseMatrix
  :
  public Matrix
{
public:

  DenseMatrix() : Matrix()
  {
  }

  DenseMatrix(std::size_t p, std::size_t q, const double val = 0.0);
  virtual ~DenseMatrix();
  
  double& operator()(std::size_t i, std::size_t j) override;
  double operator()(std::size_t i, std::size_t j) const override;
  
private:

  void allocate(std::size_t r, std::size_t s);
  void deallocate();
  
  // matrix entries
  double** m_mat;
  
};

}
// end namespace math8650

#endif /** __Math8650_DenseMatrix_HPP__ */
