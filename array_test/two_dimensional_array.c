#include <stdio.h>

int main() {
    int B[2][3] = {{2,3,6},{4,5,8}};
    printf("%p\n", B);
    printf("%p\n", &B[0]);
    printf("%p\n", *B);
    printf("%p\n", &B[0][0]);
    printf("%p\n", B + 1);
    printf("%p\n", &B[1]);
    printf("%p\n", *(B+1));
    printf("%p\n", B[1]);
    printf("%p\n", &B[1][0]);
    printf("%p\n", *(B+1)+2);
    printf("%p\n", B[1] + 2);
    printf("%p\n", &B[1][2]);
    printf("%d\n", *(*B+1));
    return 0;
}
