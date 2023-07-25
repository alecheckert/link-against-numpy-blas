#include "test_cujo.h"
using namespace cujo;

void assert_rclose(float obs, float ref, float tol)
{
    float diff = std::abs(obs - ref) / ref;
    if(diff>tol){
        std::cerr << "failed tolerance test: got " << obs
        << ", expected " << ref << " (rdiff " << diff << ")\n";
    }
    assert(diff<=tol);
}

void test_mahalanobis()
{
    const int n = 4;
    const int n2 = n * n;
    std::unique_ptr<float[]> A(new float[n2]);
    std::unique_ptr<float[]> x(new float[n]);
    for(int i=0; i<n2; ++i){
        A[i] = static_cast<float>(i);
    }
    for(int i=0; i<n; ++i){
        x[i] = static_cast<float>(i);
    }
    float result = mahalanobis(n, A.get(), x.get());
    assert_rclose(result, 420.0f, 1e-6f);
}
