#include <stdio.h>  
int main() {
	int pma, pmi, nma, nmi, num;
	int p = 0, n = 0;
	for (int i = 0; i < 20; i++) {
		printf("第%d个数：", i + 1);
		scanf("%d", &num);
		if (num > 0) {
			p++;
			if (p == 1) {
				pma = pmi = num;
			}
			if (pma < num) {
				pma = num;
			}
			if (pmi > num) {
				pmi = num;
			}
		}
		if (num < 0) {
			n++;
			if (n == 1) {
				nma = nmi = num;
			}
			if (nma < num) {
				nma = num;
			}
			if (nmi > num) {
				nmi = num;
			}
		}
	}
	if (p != 0 && n != 0)
	{
		printf("最大正整数=%d,最小正整数=%d\n", pma, pmi);
		printf("最大负整数=%d,最小负整数=%d\n", nma, nmi);
	}
	if (p == 0 && n != 0) {
		printf("没有最大正整数和最小正整数\n");
		printf("最大负整数=%d,最小负整数=%d\n", nma, nmi);
	}
	if (n == 0 && p !=0 ) {
		printf("最大正整数=%d,最小正整数=%d\n", pma, pmi);
		printf("没有最大负整数和最小负整数\n");
	}		
	if (n == 0 && p == 0) {
		printf("没有最大正整数和最小正整数\n");
		printf("没有最大负整数和最小负整数\n");

	}
	return 0;
}

