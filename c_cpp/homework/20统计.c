
#include <stdio.h>  

int main() {
    int n[20]; 
    int p = 0, ng = 0, z = 0; 
    int ps = 0, NGS = 0;   
    float pa, nga;  

   
    printf("请输入20个整数:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (n[i] > 0) {
            p++;
            ps += n[i];
        }
        else if (n[i] < 0) {
            ng++;
            NGS += n[i];
        }
        else {
            z++;
        }
    }

    if (p > 0) {
        pa = (float)ps / p;
    }
    else {
        pa = 0.0;
    }
    if (ng > 0) {
        nga = (float)NGS / ng;
    }
    else {
        nga = 0.0;
    }

    printf("正整数个数: %d, 和: %d, 平均值: %.2f\n", p, ps, pa);
    printf("负整数个数: %d, 和: %d, 平均值: %.2f\n", ng, NGS, nga);
    printf("零的个数: %d\n", z);

    return 0;
}