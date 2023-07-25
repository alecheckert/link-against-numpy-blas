#ifndef _CUJO_H
#define _CUJO_H

#include "cblas.h"

namespace cujo{

/*
 *  Function: mahalanobis
 *  ---------------------
 *  Compute the Mahalanobis distance x^T A x for an n-vector
 *  x and n-by-n matrix A.
*/
float mahalanobis(
    const int n,
    const float* A,
    const float* x
);

} // end namespace cujo

#endif
