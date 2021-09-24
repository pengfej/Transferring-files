#include "TridiagonalMatrix.hpp"
#include "DenseVector.hpp"

namespace math8650
{

void TridiagonalMatrix::allocate(std::size_t nrows, std::size_t ncols)
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

void TridiagonalMatrix::deallocate()
{
  if (!m_is_allocated)
    return;
  for (std::size_t i = 0; i < m_rows; i++) delete [] m_mat[i];
  delete [] m_mat; m_rows = 0; m_cols = 0;
  m_is_allocated = false;
}
/// end void deallocate

TridiagonalMatrix::TridiagonalMatrix(std::size_t nrows, std::size_t ncols, const double val)
{
  allocate(nrows,ncols);
  for (std::size_t i = 0; i < m_rows; ++i)
    for (std::size_t j = 0; j < m_cols; ++j)
        if (j == i + 1|| j == i || j == i-1)
        m_mat[i][j] = val;
      else
        m_mat[i][j] = 0.0;
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

DenseVector TridiagonalMatrix::operator*(const DenseVector& vec) const
{
  assert(m_is_allocated);
  if (m_cols != vec.size())
    throw std::runtime_error("Error in \"TridiagonalMatrix::operator*\" "
                             "multiplication not possible, matrix sizes do not agree");

  DenseVector temp_vector(m_rows,0.0);
  for (std::size_t i = 0; i < m_rows; i++)
    for (std::size_t j = 0; j < m_cols; j++) temp_vector[i] += m_mat[i][j]*vec[j];
  return temp_vector;
}
/// end Vector operator*

DenseVector TridiagonalMatrix::trans_mult(const DenseVector& vec) const
{
  assert(m_is_allocated);
  if (m_cols != vec.size())
    throw std::runtime_error("Error in \"TridiagonalMatrix::operator*\" "
                             "multiplication not possible, matrix sizes do not agree");

  DenseVector temp_vector(m_rows,0.0);
  for (std::size_t i = 0; i < m_rows; i++)
    for (std::size_t j = 0; j < m_cols; j++) temp_vector[i] += m_mat[j][i]*vec[j];
  return temp_vector;
}
/// end Vector operator*

void TridiagonalMatrix::getDiagonal(DenseVector& vec) const
{
  vec.allocate(m_rows);
  for (std::size_t i = 0; i < m_rows; i++)
    vec(i) = m_mat[i][i];
}
/// end void Transpose

}
// end namespace math8650
