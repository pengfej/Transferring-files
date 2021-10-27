#include "LinkMatrix.hpp"
#include "linked_list.hpp"
#include "DenseVector.hpp"

namespace math8650
{

DenseVector LinkMatrix::operator*(const DenseVector& vec) const
{
  assert(m_is_allocated);
  if (m_cols != vec.size())
    throw std::runtime_error("Error in \"LinkMatrix::operator*\" "
                             "multiplication not possible, LinkMatrix sizes do not agree");

  DenseVector temp_vector(m_rows,0.0);

  // pointer -> head;
  // temp_matrix
  // while matrix is not empty
  //    i = get<0>(elem)
  //    j = get<1>(elem)
  //    temp_vector[j] += val * vec[j]
  //    matrix.removefront();


  for (std::size_t i = 0; i < m_rows; i++)
    for (std::size_t j = 0; j < m_cols; j++) temp_vector[i] += (*this)(i,j)*vec[j];

  return temp_vector;

}
/// end Vector operator*

DenseVector LinkMatrix::trans_mult(const DenseVector& vec) const
{
  assert(m_is_allocated);
  if (m_cols != vec.size())
    throw std::runtime_error("Error in \"LinkMatrix::operator*\" "
                             "multiplication not possible, LinkMatrix sizes do not agree");

   // pointer -> head;
   // temp_matrix
   // while matrix is not empty
   //    i = get<0>(elem)
   //    j = get<1>(elem)
   //    temp_vector[j] += val * vec[j]
   //    matrix.removefront();

  DenseVector temp_vector(m_rows,0.0);
  for (std::size_t i = 0; i < m_rows; i++)
    for (std::size_t j = 0; j < m_cols; j++) temp_vector[i] += (*this)(j,i)*vec[j];
  return temp_vector;
}
/// end Vector operator*

void LinkMatrix::getDiagonal(DenseVector& vec) const
{
  vec.allocate(m_rows);


  //  while matrix is not empty
  //    for (std::size_t i = 0; i < m_rows; i++)
  //      i = get<0>(elem)
  //      j = get<1>(elem)
  //      val = get<2>(elem)
  //      if i == j
  //          vec(i) = val;
  //      else
  //         vec(i) = 0;
  //    matrix.removefront.

  for (std::size_t i = 0; i < m_rows; i++)
    vec(i) = (*this)(i,i);
}
/// end void Transpose

}
// end namespace math8650
