#ifndef _TEST_CUJO_H
#define _TEST_CUJO_H

#include <memory>
#include <cassert>
#include <cmath>
#include "cujo.h"

void assert_rclose(float obs, float ref, float tol = 1e-6f);

void test_mahalanobis();

#endif
