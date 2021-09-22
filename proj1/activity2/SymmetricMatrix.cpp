
#include "SymmetricMatrix.hpp"
#include "DenseVector.hpp"

namespace math8650
{SymmetricMatrix::SymmetricMatrix(std::size_t n, const double val)
  :
  Matrix(n,n)
{
  allocate(n);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j <= i; ++j)
      m_mat[i][j] = val;
}
/// end SymmetricMatrix

SymmetricMatrix::SymmetricMatrix(std::size_t n_rows, std::size_t n_cols, const double val)
  :
  Matrix(n_rows,n_cols)
{ 
  assert(n_cols==n_rows);
  allocate(n_cols);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j <= i; ++j)
      m_mat[i][j] = val;
}
/// end SymmetricMatrix
double SymmetricMatrix::operator()(std::size_t i, std::size_t j) const
{ 
  if (j <= i)
    return m_mat[i][j];
  else
    return m_mat[j][i];
}
/// end double operator()

double& SymmetricMatrix::operator()(std::size_t i, std::size_t j)
{
  if (j <= i)
    return m_mat[i][j];
  else
    return m_mat[j][i];
}
/// end double& operator()

void SymmetricMatrix::getDiagonal(DenseVector& vec) const
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
