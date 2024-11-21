#include <stdio.h>
#define N 100  // 这个定义实际上没有用到，因为我们可以在内部循环中动态跟踪需要的空间

int main() {
    int n;
    int a[32];  // 对于32位整数，最多需要32个二进制位（包括前导零，但实际上我们不会存储前导零）
    int i, len;  // len用于存储当前二进制数的长度

    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            printf("0\n");
            continue;  // 直接打印0并继续下一个输入
        }

        i = 0;  // 重置索引为0，开始存储当前数的二进制位
        while (n > 0) {
            a[i] = n % 2;
            n = n / 2;
            i++;
        }

        len = i;  // 存储当前二进制数的长度（不包括前导零）

        // 从最高位开始打印到最低位
        for (i = len - 1; i >= 0; i--) {
            printf("%d", a[i]);
        }
        printf("\n");
    }

    return 0;
}