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

  SymmetricMatrix() : Matrix()
  {
  }
  SymmetricMatrix(std::size_t n, const double val);
  SymmetricMatrix(std::size_t p, std::size_t q, const double val = 0.0);
  virtual ~SymmetricMatrix();
  
  double& operator()(std::size_t i, std::size_t j) override;
  double operator()(std::size_t i, std::size_t j) const override;
  
private:

  void allocate(std::size_t r, std::size_t s);
  void deallocate();
  
  // matrix entries
  double** m_mat;
  
// // };

}
// end namespace math8650

#endif /** __Math8650_SymmetricMatrix_HPP__ */
