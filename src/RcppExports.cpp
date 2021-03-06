// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// pdas
Rcpp::List pdas(arma::mat X, arma::vec y, double al, double lam, char methodn, double tau, double mu, double weight, int MaxIt, arma::vec Xty, arma::vec x0, arma::vec d0, arma::uvec Aoo, arma::mat Goo);
RcppExport SEXP _PDAS_pdas(SEXP XSEXP, SEXP ySEXP, SEXP alSEXP, SEXP lamSEXP, SEXP methodnSEXP, SEXP tauSEXP, SEXP muSEXP, SEXP weightSEXP, SEXP MaxItSEXP, SEXP XtySEXP, SEXP x0SEXP, SEXP d0SEXP, SEXP AooSEXP, SEXP GooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type al(alSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< char >::type methodn(methodnSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type MaxIt(MaxItSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Xty(XtySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d0(d0SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type Aoo(AooSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Goo(GooSEXP);
    rcpp_result_gen = Rcpp::wrap(pdas(X, y, al, lam, methodn, tau, mu, weight, MaxIt, Xty, x0, d0, Aoo, Goo));
    return rcpp_result_gen;
END_RCPP
}
// pdas_path
Rcpp::List pdas_path(arma::mat X, arma::vec y, std::string method, std::string sel, double al, double tau, double mu, double del, double weight, int MaxIt, double Lmax, double Lmin, int N);
RcppExport SEXP _PDAS_pdas_path(SEXP XSEXP, SEXP ySEXP, SEXP methodSEXP, SEXP selSEXP, SEXP alSEXP, SEXP tauSEXP, SEXP muSEXP, SEXP delSEXP, SEXP weightSEXP, SEXP MaxItSEXP, SEXP LmaxSEXP, SEXP LminSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< std::string >::type sel(selSEXP);
    Rcpp::traits::input_parameter< double >::type al(alSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type del(delSEXP);
    Rcpp::traits::input_parameter< double >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type MaxIt(MaxItSEXP);
    Rcpp::traits::input_parameter< double >::type Lmax(LmaxSEXP);
    Rcpp::traits::input_parameter< double >::type Lmin(LminSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(pdas_path(X, y, method, sel, al, tau, mu, del, weight, MaxIt, Lmax, Lmin, N));
    return rcpp_result_gen;
END_RCPP
}
// pdas_geno
Rcpp::List pdas_geno(std::string stringname, std::string method, std::string sel, double al, double tau, double mu, double del, double weight, int MaxIt, double Lmax, double Lmin, int Nstep);
RcppExport SEXP _PDAS_pdas_geno(SEXP stringnameSEXP, SEXP methodSEXP, SEXP selSEXP, SEXP alSEXP, SEXP tauSEXP, SEXP muSEXP, SEXP delSEXP, SEXP weightSEXP, SEXP MaxItSEXP, SEXP LmaxSEXP, SEXP LminSEXP, SEXP NstepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type stringname(stringnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< std::string >::type sel(selSEXP);
    Rcpp::traits::input_parameter< double >::type al(alSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type del(delSEXP);
    Rcpp::traits::input_parameter< double >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type MaxIt(MaxItSEXP);
    Rcpp::traits::input_parameter< double >::type Lmax(LmaxSEXP);
    Rcpp::traits::input_parameter< double >::type Lmin(LminSEXP);
    Rcpp::traits::input_parameter< int >::type Nstep(NstepSEXP);
    rcpp_result_gen = Rcpp::wrap(pdas_geno(stringname, method, sel, al, tau, mu, del, weight, MaxIt, Lmax, Lmin, Nstep));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PDAS_pdas", (DL_FUNC) &_PDAS_pdas, 14},
    {"_PDAS_pdas_path", (DL_FUNC) &_PDAS_pdas_path, 13},
    {"_PDAS_pdas_geno", (DL_FUNC) &_PDAS_pdas_geno, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_PDAS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
