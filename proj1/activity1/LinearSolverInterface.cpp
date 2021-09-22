#include "cg.h"
#include "bicg.h"

#include "LinearSolverInterface.hpp"
#include "JacobiPreconditioner.hpp"

namespace math8650
{

void 
LinearSolverInterface::
solveSystemCG(const std::shared_ptr<const DenseMatrix>& A, 
              const std::shared_ptr<const DenseVector>& rhs, 
              const std::shared_ptr<DenseVector>& sol)
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<DenseMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;
  const auto solver_tag = CG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The CG method converged ***********************"                     << std::endl;
    std::cout << "The CG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                   << std::endl;
  } else {
    std::cout << "The CG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The CG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                   << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemBiCG(const std::shared_ptr<const DenseMatrix>& A, 
                const std::shared_ptr<const DenseVector>& rhs, 
                const std::shared_ptr<DenseVector>& sol)  
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<DenseMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;

  const auto solver_tag = BiCG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The BiCG method converged ***********************"                     << std::endl;
    std::cout << "The BiCG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                     << std::endl;
  } else {
    std::cout << "The BiCG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The BiCG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                     << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemCG(const std::shared_ptr<const SymmetricMatrix>& A, 
              const std::shared_ptr<const DenseVector>& rhs, 
              const std::shared_ptr<DenseVector>& sol)
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<SymmetricMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;
  const auto solver_tag = CG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The CG method converged ***********************"                     << std::endl;
    std::cout << "The CG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                   << std::endl;
  } else {
    std::cout << "The CG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The CG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                   << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemBiCG(const std::shared_ptr<const SymmetricMatrix>& A, 
                const std::shared_ptr<const DenseVector>& rhs, 
                const std::shared_ptr<DenseVector>& sol)  
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<SymmetricMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;

  const auto solver_tag = BiCG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The BiCG method converged ***********************"                     << std::endl;
    std::cout << "The BiCG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                     << std::endl;
  } else {
    std::cout << "The BiCG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The BiCG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                     << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemCG(const std::shared_ptr<const TridiagonalMatrix>& A, 
              const std::shared_ptr<const DenseVector>& rhs, 
              const std::shared_ptr<DenseVector>& sol)
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<TridiagonalMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;
  const auto solver_tag = CG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The CG method converged ***********************"                     << std::endl;
    std::cout << "The CG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                   << std::endl;
  } else {
    std::cout << "The CG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The CG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                   << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemBiCG(const std::shared_ptr<const TridiagonalMatrix>& A, 
                const std::shared_ptr<const DenseVector>& rhs, 
                const std::shared_ptr<DenseVector>& sol)  
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<TridiagonalMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;

  const auto solver_tag = BiCG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The BiCG method converged ***********************"                     << std::endl;
    std::cout << "The BiCG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                     << std::endl;
  } else {
    std::cout << "The BiCG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The BiCG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                     << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemCG(const std::shared_ptr<const TriangleMatrix>& A, 
              const std::shared_ptr<const DenseVector>& rhs, 
              const std::shared_ptr<DenseVector>& sol)
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<TriangleMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;
  const auto solver_tag = CG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The CG method converged ***********************"                     << std::endl;
    std::cout << "The CG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                   << std::endl;
  } else {
    std::cout << "The CG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The CG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The CG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                          << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                   << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}

void 
LinearSolverInterface::
solveSystemBiCG(const std::shared_ptr<const TriangleMatrix>& A, 
                const std::shared_ptr<const DenseVector>& rhs, 
                const std::shared_ptr<DenseVector>& sol)  
{
  std::cout << "============ BEGIN Krylov Solver Step ======================" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  auto prec = std::make_unique<const JacobiPreconditioner<TriangleMatrix,DenseVector>>(*A);
  int maxiter_ = maxiter;
  double tol_ = tol;

  const auto solver_tag = BiCG(*A,*sol,*rhs,*prec,maxiter_,tol_);
  if (solver_tag == 0)
  {
    std::cout << "The BiCG method converged ***********************"                     << std::endl;
    std::cout << "The BiCG method number of iterations = " << maxiter_                   << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "============ END Krylov Solver Step ============="                     << std::endl;
  } else {
    std::cout << "The BiCG method did not converge after " << maxiter_ << " iterations " << std::endl;
    std::cout << "The BiCG method residual norm        = " << tol_                       << std::endl;
    std::cout << "The BiCG method output tag           = " << solver_tag                 << std::endl;
    std::cout                                                                            << std::endl;
    std::cout << "=========== ERROR in Krylov Solver Step ========="                     << std::endl;
    throw std::runtime_error("Krylov Solver Has Failed.");
  }
}



}
// end namespace math8650
