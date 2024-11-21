#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int A, B, N;
    while (scanf("%d %d", &A, &B) == 2) {
        bool found = false;
        for (N = 1; N <= 10000; N++) {
            int temp1 = N + A;
            int tempSqrt1 = (int)sqrt(temp1);
            int temp2 = N + B;
            int tempSqrt2 = (int)sqrt(temp2);

            if (tempSqrt1 * tempSqrt1 == temp1 && tempSqrt2 * tempSqrt2 == temp2) {
                printf("%d\n", N);
                found = true;
                break; // 找到答案后退出循环
            }
        }
        if (!found) {
            printf("Not found!\n");
        }
    }
    return 0;
}