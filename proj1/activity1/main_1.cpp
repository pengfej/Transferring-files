#include <iostream>
#include "SymmetricMatrix.hpp"
#include "TriangleMatrix.hpp"
#include "TridigonalMatrix.hpp"
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
  std::vector<int> ns = {10,20,40,80,160,320,1000,2000,4000};
  
  for (auto n : ns)
  {
    auto A_d     = std::make_shared<DenseMatrix>(n-1,n-1);
    auto A_s     = std::make_shared<SymmetricMatrix>(n-1);
    auto A_td    = std::make_shared<TridiagonalMatrix>(n-1);
    auto A_tr    = std::make_shared<TriangleMatrix>(n-1);
    auto b       = std::make_shared<DenseVector>(n-1);
    auto x       = std::make_shared<DenseVector>(n-1);
    auto x_exact = std::make_shared<DenseVector>(n-1);
    
    // diags
    for (int i (0); i < n-1; ++i)
    {
      (*A_d) (i,i) = -2.0;
      (*A_s) (i,i) = -2.0;
      (*A_td) (i,i) = -2.0;
      (*A_tr) (i,i) = -2.0;
      (*b)(i) = (1.0/n)*(1.0/n)*M_PI*M_PI*std::sin(M_PI*((1.0/n)*(i+1)));
      (*x_exact)(i) = - std::sin(M_PI*((1.0/n)*(i+1)));
    }
    
    for (int i (0); i < n-2; ++i)
    {
      (*A_d) (i,i+1) = 1.0;
      (*A_s) (i,i+1) = 1.0;
      (*A_td) (i,i+1) = 1.0;
      (*A_tr) (i,i+1) = 1.0;
    }
    
    for (int i (0); i < n-2; ++i)
    {
      (*A_d) (i+1,i) = 1.0;
      (*A_td) (i+1,i) = 1.0;
      (*A_tr) (i+1,i) = 1.0;
    }

    // compute and right to file the solution from the dense matrix computation
    LinearSolverInterface::solveSystemCG(A_d,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_d_filename = "x_num_" + std::to_string(n) + "_dense.mat";
    auto ofs_d = std::make_unique<std::fstream>(x_num_d_filename);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_d << (*x)(i) << std::endl;
    
    
    // compute and right to file the solution from the symmetric matrix computation
    LinearSolverInterface::solveSystemCG(A_s,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_s_filename = "x_num_" + std::to_string(n) + "_symm.mat";
    auto ofs_s = std::make_unique<std::fstream>(x_num_s_filename);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_s << (*x)(i) << std::endl;
    
    
    // compute and right to file the solution from the symmetric matrix computation
    LinearSolverInterface::solveSystemCG(A_tr,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_s_filename = "x_num_" + std::to_string(n) + "_trang.mat";
    auto ofs_s = std::make_unique<std::fstream>(x_num_s_filename);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_s << (*x)(i) << std::endl;
    
    
    
    // compute and right to file the solution from the symmetric matrix computation
    LinearSolverInterface::solveSystemCG(A_td,b,x);
    std::cout << std::endl << *x << std::endl;
    std::string x_num_s_filename = "x_num_" + std::to_string(n) + "_trid.mat";
    auto ofs_s = std::make_unique<std::fstream>(x_num_s_filename);
    for (std::size_t i(0); i < x->size(); ++i)
      *ofs_s << (*x)(i) << std::endl;
    
    
    // write the exact solution to file    
    //std::ofstream ofs_e("x_num_" + std::to_string(n) + "_e.mat");
    //for (std::size_t i(0); i < x_exact->size(); ++i)
    //  ofs_e << (*x_exact)(i) << std::endl;
    
  }
  
}
