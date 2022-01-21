#include<stdio.h>

int main(void) {
	char number[1000000];
	int i, j, k,sum=0;

	scanf("%s", number);
	
	for (i = 0; i < strlen(number); i++) {
		sum = sum + number[i] - '0';
	}
	
	printf("%d", sum);
	
	return 0;
}