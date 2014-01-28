// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/fastread.h"
#include <Rcpp.h>

using namespace Rcpp;

// read_csv
List read_csv(SEXP input, int n, CharacterVector classes);
RcppExport SEXP fastread_read_csv(SEXP inputSEXP, SEXP nSEXP, SEXP classesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP );
        List __result = read_csv(input, n, classes);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// count_lines
int count_lines(std::string file);
RcppExport SEXP fastread_count_lines(SEXP fileSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type file(fileSEXP );
        int __result = count_lines(file);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_lines
CharacterVector read_lines(std::string file, int n = 0);
RcppExport SEXP fastread_read_lines(SEXP fileSEXP, SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type file(fileSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        CharacterVector __result = read_lines(file, n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_file
String read_file(const std::string& path);
RcppExport SEXP fastread_read_file(SEXP pathSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP );
        String __result = read_file(path);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
