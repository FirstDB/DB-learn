#include <stdio.h>  
int main() {
	int pma, pmi, nma, nmi, num;
	int p = 0, n = 0;
	for (int i = 0; i < 20; i++) {
		printf("��%d������", i + 1);
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
		printf("���������=%d,��С������=%d\n", pma, pmi);
		printf("�������=%d,��С������=%d\n", nma, nmi);
	}
	if (p == 0 && n != 0) {
		printf("û���������������С������\n");
		printf("�������=%d,��С������=%d\n", nma, nmi);
	}
	if (n == 0 && p !=0 ) {
		printf("���������=%d,��С������=%d\n", pma, pmi);
		printf("û�������������С������\n");
	}		
	if (n == 0 && p == 0) {
		printf("û���������������С������\n");
		printf("û�������������С������\n");

	}
	return 0;
}

