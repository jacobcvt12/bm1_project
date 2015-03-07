// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sampler
Rcpp::NumericMatrix sampler(Rcpp::NumericVector y, double mu0, double tau20, double sigma20, double v0, double a, double b, int S, int B);
RcppExport SEXP bm_sampler(SEXP ySEXP, SEXP mu0SEXP, SEXP tau20SEXP, SEXP sigma20SEXP, SEXP v0SEXP, SEXP aSEXP, SEXP bSEXP, SEXP SSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type tau20(tau20SEXP);
    Rcpp::traits::input_parameter< double >::type sigma20(sigma20SEXP);
    Rcpp::traits::input_parameter< double >::type v0(v0SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    __result = Rcpp::wrap(sampler(y, mu0, tau20, sigma20, v0, a, b, S, B));
    return __result;
END_RCPP
}
