#include <stdio.h>
int main() {
	char s[10];
	printf("������һ���ַ���(����С��10):");
	gets(s);
	int max = s[0];
	for (int i = 1; i < 9; i++)
	{
		max = max > s[i] ? max : s[i];
	}
	printf("ASCII�������ַ���:%c", max);

	return 0;
}
