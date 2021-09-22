#include "TriangleMatrix.hpp"
#include "DenseVector.hpp"

namespace math8650
{

void TriangleMatrix::allocate(std::size_t nrows, std::size_t ncols)
{
  if (!((nrows > 0) && (ncols > 0)))
  {
    m_is_allocated = false;
  } else {
    m_rows = nrows; m_cols = ncols;
    m_mat = new double*[m_rows];
    for (std::size_t i = 0; i < m_rows; ++i)
      m_mat[i] = new double[m_cols];
    m_is_allocated = true;
  }
}
/// end void allocate

void TriangleMatrix::deallocate()
{
  if (!m_is_allocated)
    return;
  for (std::size_t i = 0; i < m_rows; i++) delete [] m_mat[i];
  delete [] m_mat; m_rows = 0; m_cols = 0;
  m_is_allocated = false;
}
/// end void deallocate

TriangleMatrix::TriangleMatrix(std::size_t n, const double val)
  :
  Matrix(n,n)
{
  allocate(n);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j <= i; ++j)
      m_mat[i][j] = val;
}
/// end SymmetricMatrix

TriangleMatrix::TriangleMatrix(std::size_t n_rows, std::size_t n_cols, const double val)
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
double TriangleMatrix::operator()(std::size_t i, std::size_t j) const
{ 
  if (j <= i)
    return m_mat[i][j];
  else
    return 0;
}
/// end double operator()

double& TriangleMatrix::operator()(std::size_t i, std::size_t j)
{
  if (j <= i)
    return m_mat[i][j];
  else
    return 0;
}
/// end double& operator()

void TriangleMatrix::getDiagonal(DenseVector& vec) const
{
  vec.allocate(m_rows);
  for (std::size_t i = 0; i < m_rows; i++)
    vec(i) = m_mat[i][i];
}
/// end void Transpose

}
// end namespace math8650