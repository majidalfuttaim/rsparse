// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// als_implicit
void als_implicit(const arma::sp_mat& mat, arma::mat& X, arma::mat& XtX, arma::mat& Y, int n_threads);
RcppExport SEXP reco_als_implicit(SEXP matSEXP, SEXP XSEXP, SEXP XtXSEXP, SEXP YSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    als_implicit(mat, X, XtX, Y, n_threads);
    return R_NilValue;
END_RCPP
}
// als_loss
double als_loss(const arma::sp_mat& mat, arma::mat& X, arma::mat& Y, double lambda, int feedback, int n_threads);
RcppExport SEXP reco_als_loss(SEXP matSEXP, SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP feedbackSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type feedback(feedbackSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(als_loss(mat, X, Y, lambda, feedback, n_threads));
    return rcpp_result_gen;
END_RCPP
}
