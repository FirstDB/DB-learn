#include<stdio.h>
int main() {
	int a[99], i, count=0,c;
	printf("ÇëÊäÈëÊı×ÖĞòÁĞ£º");
	for (i = 0;getchar()!='\n'; i++) {
		scanf("%d", &a[i]);
		count++;
	}
	for (i = 0; i < count-1; i++) {
		printf("%d ", a[i+1] - a[i]);
	}
	return 0;
}