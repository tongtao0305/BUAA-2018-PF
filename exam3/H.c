#include<stdio.h>

int main(void) {
	char c;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			switch (c) {
			case '+':printf("jia "); break;
			case '-':printf("jian "); break;
			case '*':printf("cheng "); break;
			case '/':printf("chu "); break;
			case '%':printf("mo "); break;
			case '(':printf("zuokuohao "); break;
			case ')':printf("youkuohao "); break;
			case '^':printf("yihuo "); break;
			case '#':printf("jinghao "); break;
			}
		}
	}
	
	return 0;
}