#ifndef __Math8650_TridiagonalMatrix_HPP__
#define __Math8650_TridiagonalMatrix_HPP__

#include <cassert>
#include <iostream>

#include "Matrix.hpp"

namespace math8650
{

class TridiagonalMatrix
  :
  public Matrix
{
public:

  TridiagonalMatrix() : Matrix()
  {
  }
  
  TridiagonalMatrix(std::size_t n, const double val)
  TridiagonalMatrix(std::size_t p, std::size_t q, const double val = 0.0);
  virtual ~TridiagonalMatrix();
  
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

#endif /** __Math8650_TridiagonalMatrix_HPP__ */
