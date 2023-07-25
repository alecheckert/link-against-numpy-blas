#include "cujo.h"

namespace cujo{

float mahalanobis(
    const int n,
    const float* A,
    const float* x
){
    float tmp[n];
    cblas_sgemv(
        CblasRowMajor,   // order
        CblasTrans,      // transpose
        n,               // m
        n,               // n
        1,               // alpha
        A,               // a
        n,               // lda
        x,               // x
        1,               // incx
        0,               // beta
        &tmp[0],         // y
        1                // incy
    );
    float out = cblas_sdot(
        n,               // n
        x,               // x
        1,               // incx
        &tmp[0],         // y
        1                // incy
    );
    return out;
}

} // end namespace cujo
