#include<stdio.h>
int main() {
	int n, sum=0;
	for (n = 0; n <= 1000; n++) {
		if (n % 3 == 0) {
			sum += n;
		}
	}			
	printf("%d\n", sum);
	return 0;
}