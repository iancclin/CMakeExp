#include <iostream>
#include "libA/libA.h"
#include "libB/libB.h"
#include "libC/libC.h"

//extern "C"
//{
//void
//dgemv_(const char *        TRANS,
//       const unsigned int *M,
//       const unsigned int *N,
//       const double *      alpha,
//       const double *      A,
//       const unsigned int *LDA,
//       const double *      X,
//       const unsigned int *INCX,
//       const double *      beta,
//       double *            C,
//       const unsigned int *INCY);
//}

int main(int argc, char **argv) {
    char trans = 'N';
    unsigned int m = 10, n = 10, inc = 1;
    double alpha = 1.0, beta = 1.0;
    double a[100], b[10], c[10];
//    dgemv_(&trans, &m, &n, &alpha, a, &m, b, &inc, &beta, c, &inc);

    libA A;
    A.test();
    libB B;
    B.test();
    libC C;
    C.test();
    return 0;
}
