// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// neighbors_inner
NumericMatrix neighbors_inner(int K, NumericMatrix old_knns, NumericMatrix data, Function callback);
RcppExport SEXP largevis_neighbors_inner(SEXP KSEXP, SEXP old_knnsSEXP, SEXP dataSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type old_knns(old_knnsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    __result = Rcpp::wrap(neighbors_inner(K, old_knns, data, callback));
    return __result;
END_RCPP
}
// sgd
void sgd(NumericMatrix coords, NumericVector positiveEdges, NumericVector is, NumericVector js, NumericVector ws, NumericVector negativeSampleWeights, int gamma, int rho, int minRho, bool useWeights, S4 wij, int M, int alpha, Function callback);
RcppExport SEXP largevis_sgd(SEXP coordsSEXP, SEXP positiveEdgesSEXP, SEXP isSEXP, SEXP jsSEXP, SEXP wsSEXP, SEXP negativeSampleWeightsSEXP, SEXP gammaSEXP, SEXP rhoSEXP, SEXP minRhoSEXP, SEXP useWeightsSEXP, SEXP wijSEXP, SEXP MSEXP, SEXP alphaSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type positiveEdges(positiveEdgesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type is(isSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type js(jsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type negativeSampleWeights(negativeSampleWeightsSEXP);
    Rcpp::traits::input_parameter< int >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type minRho(minRhoSEXP);
    Rcpp::traits::input_parameter< bool >::type useWeights(useWeightsSEXP);
    Rcpp::traits::input_parameter< S4 >::type wij(wijSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    sgd(coords, positiveEdges, is, js, ws, negativeSampleWeights, gamma, rho, minRho, useWeights, wij, M, alpha, callback);
    return R_NilValue;
END_RCPP
}
