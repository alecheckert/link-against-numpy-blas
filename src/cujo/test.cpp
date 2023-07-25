#include <iostream>
#include <memory>
#include "cujo.h"

void test0()
{
    const int n = 4;
    const int n2 = n * n;
    std::unique_ptr<float[]> A(new float[n2]);
    std::unique_ptr<float[]> x(new float[n]);
    for(int i=0; i<n2; ++i){
        A[i] = static_cast<float>(i);
    }
    for(int i=0; i<n2; ++i){
        x[i] = static_cast<float>(i);
    }
    float result = cujo::mahalanobis(n, A.get(), x.get());
    std::cout << "result = " << result << "\n";
}

int main()
{
    test0();
    return 0;
}
