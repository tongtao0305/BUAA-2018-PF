#include<stdio.h>

int main(void) {
	char a, b;  // ���������ַ�����

	scanf("%c %c", &a, &b);  
	printf("%c%c\\\t\'\n\"", a, b); 

	return 0;
}