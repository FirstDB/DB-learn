#include<stdio.h>
int main() {
	double s, t, d;
	s = 1;
	t = 1;
	d = 3;
	for (int i = 1; i < 10; i++) {
		t *= i + 1;
		d *= (2 * i + 1);
		s += t / d;
		printf("%f\n", d);
	}
	printf("%lf", s);
}