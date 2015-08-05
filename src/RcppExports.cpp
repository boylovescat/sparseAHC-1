// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// run_sparseHC
Rcpp::List run_sparseHC(Eigen::SparseMatrix<double> S, Rcpp::CharacterVector method, bool noOrder);
RcppExport SEXP sparseHC_run_sparseHC(SEXP SSEXP, SEXP methodSEXP, SEXP noOrderSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type S(SSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type noOrder(noOrderSEXP);
    __result = Rcpp::wrap(run_sparseHC(S, method, noOrder));
    return __result;
END_RCPP
}
