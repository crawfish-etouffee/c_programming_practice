#include <stdio.h>

void Func(int (*A)[3])
{

}

int main() {
    int C[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
    int A[2] = {1,2};
    int B[2][3] = {{2,4,6},{5,7,8}};
    printf("%p %p %p %p\n", C, *C, C[0], &C[0][0]);
    printf("%d\n", *(C[0][0] +1));
    Func(B);
}
