#include <stdio.h>
int main() {
	char s[40];
	printf("请输入一个字符串:");
	gets(s);
	if (s[0] == '\0')
	{
		printf("你输入的是空串！");
	}
	else {
		printf("你输入的是:%s", s);
	}
	return 0;
}
