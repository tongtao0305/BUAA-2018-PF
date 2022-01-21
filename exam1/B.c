#include<stdio.h>

int main(void) {
	char a, b;  // 定义两个字符变量

	scanf("%c %c", &a, &b);  
	printf("%c%c\\\t\'\n\"", a, b); 

	return 0;
}