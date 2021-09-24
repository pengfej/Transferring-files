#include "LinearSolverInterface.hpp"


using namespace math8650;

int main()
{

  auto A = std::make_shared<DenseMatrix>(3,3);
  auto b = std::make_shared<DenseVector>(3);
  auto x = std::make_shared<DenseVector>(3);

  (*A)(0,0) = 1.0;
  (*A)(0,1) = 2.0;
  (*A)(0,2) = 2.0;

  (*A)(1,0) = 3.0;
  (*A)(1,1) = 2.0;
  (*A)(1,2) = 9.0;

  (*A)(2,0) = 0.0;
  (*A)(2,1) = 2.0;
  (*A)(2,2) = 1.0;

  (*b)(0) = 1.0;
  (*b)(1) = 2.0;
  (*b)(2) = 3.0;

  LinearSolverInterface::solveSystemBiCG(A,b,x);
  std::cout << *x << std::endl;

}
