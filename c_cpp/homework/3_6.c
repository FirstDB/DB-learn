#include <stdio.h>
int main() {
	char s[10];
	printf("请输入一个字符串(长度小于10):");
	gets(s);
	int max = s[0];
	for (int i = 1; i < 9; i++)
	{
		max = max > s[i] ? max : s[i];
	}
	printf("ASCII码最大的字符是:%c", max);

	return 0;
}
