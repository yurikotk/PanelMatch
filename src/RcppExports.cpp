// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// sumCpp
int sumCpp(Rcpp::NumericVector x);
RcppExport SEXP _PanelMatch_sumCpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sumCpp(x));
    return rcpp_result_gen;
END_RCPP
}
// FindMatches
NumericMatrix FindMatches(IntegerVector unitIdx, IntegerVector timeIdx, IntegerVector treat);
RcppExport SEXP _PanelMatch_FindMatches(SEXP unitIdxSEXP, SEXP timeIdxSEXP, SEXP treatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type unitIdx(unitIdxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type timeIdx(timeIdxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type treat(treatSEXP);
    rcpp_result_gen = Rcpp::wrap(FindMatches(unitIdx, timeIdx, treat));
    return rcpp_result_gen;
END_RCPP
}
// all_sug
bool all_sug(LogicalVector x);
RcppExport SEXP _PanelMatch_all_sug(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(all_sug(x));
    return rcpp_result_gen;
END_RCPP
}
// rbind_c
NumericMatrix rbind_c(NumericMatrix x, NumericMatrix y);
RcppExport SEXP _PanelMatch_rbind_c(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rbind_c(x, y));
    return rcpp_result_gen;
END_RCPP
}
// findDDmatched2
List findDDmatched2(int L, int F, NumericMatrix x1);
RcppExport SEXP _PanelMatch_findDDmatched2(SEXP LSEXP, SEXP FSEXP, SEXP x1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type F(FSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x1(x1SEXP);
    rcpp_result_gen = Rcpp::wrap(findDDmatched2(L, F, x1));
    return rcpp_result_gen;
END_RCPP
}
// findDDNaive
List findDDNaive(int L, int F, NumericMatrix x1);
RcppExport SEXP _PanelMatch_findDDNaive(SEXP LSEXP, SEXP FSEXP, SEXP x1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type F(FSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x1(x1SEXP);
    rcpp_result_gen = Rcpp::wrap(findDDNaive(L, F, x1));
    return rcpp_result_gen;
END_RCPP
}
// findDDrestricted
List findDDrestricted(int L, int F, NumericMatrix x1);
RcppExport SEXP _PanelMatch_findDDrestricted(SEXP LSEXP, SEXP FSEXP, SEXP x1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type F(FSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x1(x1SEXP);
    rcpp_result_gen = Rcpp::wrap(findDDrestricted(L, F, x1));
    return rcpp_result_gen;
END_RCPP
}
// findDDM2stripped
List findDDM2stripped(int L, int F, NumericMatrix x1);
RcppExport SEXP _PanelMatch_findDDM2stripped(SEXP LSEXP, SEXP FSEXP, SEXP x1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type F(FSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x1(x1SEXP);
    rcpp_result_gen = Rcpp::wrap(findDDM2stripped(L, F, x1));
    return rcpp_result_gen;
END_RCPP
}
