
#include "TridiagonalMatrix.hpp"
#include "DenseVector.hpp"

namespace math8650
{

void TridiagonalMatrix::allocate(std::size_t nrows)
{
  if (!(nrows > 0))
  {
    m_is_allocated = false;
  } else {
    m_mat = new double*[m_rows];
    for (std::size_t i = 0; i < m_rows; ++i)
      m_mat[i] = new double[i+1];
    m_is_allocated = true;
  }
}
/// end void allocate

void TridiagonalMatrix::deallocate()
{
  if (!m_is_allocated)
    return;
  for (std::size_t i = 0; i < m_rows; i++) delete [] m_mat[i];
  delete [] m_mat; m_rows = 0; m_cols = 0;
  m_is_allocated = false;
}
/// end void deallocate

TridiagonalMatrix::TridiagonalMatrix(std::size_t n, const double val)
  :
  Matrix(n,n)
{
  allocate(n);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j <= i; ++j)
      m_mat[i][j] = val;
}
/// end TridiagonalMatrix

TridiagonalMatrix::TridiagonalMatrix(std::size_t n_rows, std::size_t n_cols, const double val)
  :
  Matrix(n_rows,n_cols)
{
  assert(n_cols==n_rows);
  allocate(n_cols);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j < m_cols; ++j)
      if (j == i + 1|| j == i || j == i-1)
        m_mat[i][j] = val;
      else
        m_mat[i][j] = 0;
}
/// end TridiagonalMatrix

TridiagonalMatrix::~TridiagonalMatrix()
{
  deallocate();
}
/// end Destructor ~TridiagonalMatrix

double TridiagonalMatrix::operator()(std::size_t i, std::size_t j) const
{
  if (j <= i)
    return m_mat[i][j];
  else
    return m_mat[j][i];
}
/// end double operator()

double& TridiagonalMatrix::operator()(std::size_t i, std::size_t j)
{
  if (j <= i)
    return m_mat[i][j];
  else
    return m_mat[j][i];
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
