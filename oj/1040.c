#include<stdio.h>
#include<string.h>

int main(void) {
	char s[50];
	int i,count=0;
	gets(s);

	for (i = 0; i < strlen(s)/2; i++) {
		if (s[i] != s[strlen(s) - i - 1]) {
			count = 1;
			break;
		}
	}
	
	if (count == 1)
		printf("0");
	else
		printf("1");
	
	return 0;
}