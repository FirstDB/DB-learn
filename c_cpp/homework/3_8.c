#include <stdio.h>
int main() {
	char s[40];
	printf("������һ���ַ���:");
	gets(s);
	if (s[0] == '\0')
	{
		printf("��������ǿմ���");
	}
	else {
		printf("���������:%s", s);
	}
	return 0;
}
