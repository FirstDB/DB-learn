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
            int max = 0, end = 0;//flag��ʶ�Ƿ����Ǻ�Ҫ�����0��Ĭ��û����
            bool flag = true;
            for (int j = 0; j < 5; j++) {//���ҵ�ǰ���ִ���������ĸ
                if (word[j] >= max) {
                    max = word[j];//�ѳ��ֵĴ�����max
                    end = j;
                    if (max != 0) {
                        flag = false;
                    }//���max��=0��˵�������ǺŴ����
                }
            }
            if (flag == true) {//����ʱ���
                printf("1 2 3 4 5\n");
                break;//�˳�ѭ��
            }
            for (int j = 0; j <= end; j++) {
                if (word[j] == max) {//�����ʱ����������ͬ����ĸ�Ǻ�
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