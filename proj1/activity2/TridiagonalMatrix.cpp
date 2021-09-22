
#include "TridiagonalMatrix.hpp"
#include "DenseVector.hpp"

namespace math8650
{
TridiagonalMatrix::TridiagonalMatrix(std::size_t n, const double val)
  :
  Matrix(n,n)
{
  allocate(n);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j <= i; ++j)
      if (j == i-1 || j == i || j ==i +1)
            m_mat[i][j] = val;
}
/// end SymmetricMatrix

TridiagonalMatrix::TridiagonalMatrix(std::size_t n_rows, std::size_t n_cols, const double val)
  :
  Matrix(n_rows,n_cols)
{ 
  assert(n_cols==n_rows);
  allocate(n_cols);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j <= i; ++j)
        if (j == i-1 || j == i || j ==i +1)
            m_mat[i][j] = val;
}
/// end SymmetricMatrix
double TridiagonalMatrix::operator()(std::size_t i, std::size_t j) const
{ 
  if (j == i || j == i-1 || j == i+1)
    return m_mat[i][j];
  else
    return 0;
}
/// end double operator()

double& TridiagonalMatrix::operator()(std::size_t i, std::size_t j)
{ 
  if (j == i || j == i-1 || j == i+1)
    return m_mat[i][j];
  else
    return 0;
}
/// end double& operator()

void TridiagonalMatrix::getDiagonal(DenseVector& vec) const
{
  vec.allocate(m_rows);
  for (std::size_t i = 0; i < m_rows; i++)
    vec(i) = m_mat[i][i];
}
/// end void Transpose

}
// end namespace math8650
}
// end namespace math8650
