
#include "Matrix.hpp"
#include "linked_list.hpp"
#include "DenseVector.hpp"

namespace math8650
{

DenseVector Matrix::operator*(const DenseVector& vec) const
{
  assert(m_is_allocated);
  if (m_cols != vec.size())
    throw std::runtime_error("Error in \"Matrix::operator*\" "
                             "multiplication not possible, matrix sizes do not agree");

  DenseVector temp_vector(m_rows,0.0);
  for (std::size_t i = 0; i < m_rows; i++)
    for (std::size_t j = 0; j < m_cols; j++) temp_vector[i] += (*this)(i,j)*vec[j];

  return temp_vector;

}
/// end Vector operator*

DenseVector Matrix::trans_mult(const DenseVector& vec) const
{
  assert(m_is_allocated);
  if (m_cols != vec.size())
    throw std::runtime_error("Error in \"Matrix::operator*\" "
                             "multiplication not possible, matrix sizes do not agree");

  DenseVector temp_vector(m_rows,0.0);
  for (std::size_t i = 0; i < m_rows; i++)
    for (std::size_t j = 0; j < m_cols; j++) temp_vector[i] += (*this)(j,i)*vec[j];
  return temp_vector;
}
/// end Vector operator*

void Matrix::getDiagonal(DenseVector& vec) const
{
  vec.allocate(m_rows);
  for (std::size_t i = 0; i < m_rows; i++)
    vec(i) = (*this)(i,i);
}
/// end void Transpose

}
// end namespace math8650
