#include <stdio.h>
#include<stdbool.h>
int main() {
    int repeat;
    scanf("%d", &repeat);
    while (repeat > 0) {
        int j;
        scanf("%d", &j);
        int word[5] = { 0 };
        for (int i = 0; i < j; i++) {
            char tem;
            scanf(" %c", &tem);
            switch (tem) {
            case '1':word[0]++; break;
            case '2':word[1]++; break;
            case '3':word[2]++; break;
            case '4':word[3]++; break;
            case '5':word[4]++; break;
            }
        }
        for (int i = 0; i < 20; i++) {
            int max = 0, end = 0;//flag标识是否还有星号要输出，0是默认没有了
            bool flag = true;
            for (int j = 0; j < 5; j++) {//查找当前出现次数最多的字母
                if (word[j] >= max) {
                    max = word[j];//把出现的次数给max
                    end = j;
                    if (max != 0) {
                        flag = false;
                    }//如果max！=0则说明仍有星号待输出
                }
            }
            if (flag == true) {//结束时输出
                printf("1 2 3 4 5\n");
                break;//退出循环
            }
            for (int j = 0; j <= end; j++) {
                if (word[j] == max) {//输出此时和最大次数相同的字母星号
                    if (j == end) {
                        printf("*");
                    }
                    else {
                        printf("* ");
                    }
                    word[j]--;
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        repeat--;
    }
    return 0;
}