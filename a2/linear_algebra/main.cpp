
#include <ctime>
#include <vector>
#include <fstream>

#include "DenseMatrix.hpp"
#include "TriangleMatrix.hpp"
#include "SymmetricMatrix.hpp"
#include "TridiagonalMatrix.hpp"
#include "LinearSolverInterface.hpp"


using namespace math8650;

void compareSymmetricToDense();


int main()
{
  std::clock_t c_start = std::clock();
  compareSymmetricToDense();
  std::clock_t c_end = std::clock();
  std::cout << "Total time for whole simulation " << (c_end-c_start)/CLOCKS_PER_SEC << " sec." << std::endl;
}


void compareSymmetricToDense()
{
  std::vector<int> ns = {10,20,40,160,320,1000,2000,4000};

  for (auto n : ns)
  {
    auto A_d     = std::make_shared<DenseMatrix>(n-1,n-1);
    auto A_s     = std::make_shared<SymmetricMatrix>(n-1);
    auto A_td    = std::make_shared<TridiagonalMatrix>(n-1); //TridiagonalMatrix
    auto A_tg    = std::make_shared<TriangleMatrix>(n-1);  //TriangleMatrix
    auto b       = std::make_shared<DenseVector>(n-1);
    auto x       = std::make_shared<DenseVector>(n-1);
    auto x_exact = std::make_shared<DenseVector>(n-1);

    // diags
    for (int i (0); i < n-1; ++i)
    {
      (*A_d) (i,i) = -2.0;
      (*A_s) (i,i) = -2.0;
      (*A_td)(i,i) = -2.0;
      (*A_tg)(i,i) = -2.0;
      (*b)(i) = (1.0/n)*(1.0/n)*M_PI*M_PI*std::sin(M_PI*((1.0/n)*(i+1)));
      (*x_exact)(i) = - std::sin(M_PI*((1.0/n)*(i+1)));
    }

    for (int i(0); i < n-1; ++i){
      for (int j(0); j< n-1; ++j){
        if (i != j){
          (*A_d) (i,j) = 1.0;
        } else if (j == i + 1|| j == i || j == i-1){
          (*A_td) (i,j) = 1.0;
          (*A_td) (j,i) = 1.0;
        } else if (i > j){
          (*A_s) (i,j) = 1.0;
          (*A_tg)(i,j) = 1.0;
        }
      }
    }



    // compute and right to file the solution from the dense matrix computation
    LinearSolverInterface::solveSystemCG(A_d,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_d_filename1 = "d_num_" + std::to_string(n) + "_dense.mat";
    auto ofs_d = std::make_unique<std::fstream>(x_num_d_filename1);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_d << (*x)(i) << std::endl;

    std::cout << "dense matrix end." << std::endl;

    // compute and right to file the solution from the symmetric matrix computation
    LinearSolverInterface::solveSystemCG(A_s,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_s_filename2 = "s_num_" + std::to_string(n) + "_symm.mat";
    auto ofs_s = std::make_unique<std::fstream>(x_num_s_filename2);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_s << (*x)(i) << std::endl;

    std::cout << "symmetric matrix end." << std::endl;

    // compute and right to file the solution from the symmetric matrix computation
    LinearSolverInterface::solveSystemCG(A_td,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_s_filename3 = "td_num_" + std::to_string(n) + "_symm.mat";
    auto ofs_td = std::make_unique<std::fstream>(x_num_s_filename3);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_td << (*x)(i) << std::endl;

    std::cout << "tridiag matrix end." << std::endl;

    // compute and right to file the solution from the symmetric matrix computation
    LinearSolverInterface::solveSystemCG(A_tg,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_s_filename4 = "tg_num_" + std::to_string(n) + "_symm.mat";
    auto ofs_tg = std::make_unique<std::fstream>(x_num_s_filename4);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_tg << (*x)(i) << std::endl;

    std::cout << "triangle matrix end." << std::endl;

    // write the exact solution to file
    std::ofstream ofs_e("x_num_" + std::to_string(n) + "_e.mat");
    for (std::size_t i(0); i < x_exact->size(); ++i)
      ofs_e << (*x_exact)(i) << std::endl;

  }

}
