#include "LinearSolverInterface.hpp"
#include <stdlib.h>
#include <vector>

using namespace math8650;

void testing_func(int n);

int main()
{

    std::vector<int> ns = {10,20,40,80,160,320};
    
    std::vector<int> nb = {1000, 2000, 3000};
    
    for (auto n:ns){
     
        //input clock.
        testing_func(n);
        
    }
  
}

void testing_func(int n){
    
    
  auto A = std::make_shared<DenseMatrix>(n,n);
  
  auto A_s = std::make_shared<SymmetricMatrix>(n,n);
  auto A_td = std::make_shared<TridiagonalMatrix>(n,n);
  auto A_tg = std::make_shared<TriangleMatrix>(n,n);
  
  
  auto b = std::make_shared<DenseVector>(n);
  auto x = std::make_shared<DenseVector>(n);

  for (int i(0); i < n; i++){
      for (int j(0); j < n; j++){
          double temp = rand();
          (*A)(i,j) = temp;
          (*A_s)(i,j) = temp;
          if (i == j || j == i+1 || j == i-1){
              (*A_td)(i,j) = temp;
          }
          if (j <= i){
              (*A_tg)(i,j) = temp;
          }
      }
      double temp2 = rand();
      (*b)(i) = temp2;
  }
  
  LinearSolverInterface::solveSystemBiCG(A,b,x);
  LinearSolverInterface::solveSystemBiCG(A_s,b,x);
  LinearSolverInterface::solveSystemBiCG(A_td,b,x);
  LinearSolverInterface::solveSystemBiCG(A_tg,b,x);
  
}
