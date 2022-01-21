#include<stdio.h>

int main(void) {
	char a[10];
	int i,sum=0;
	scanf("%s", a);
	
	for (i = 8; i >= 0; i=i-2) {
		sum = sum * 10 + (a[i] - '0');

	}
	printf("%d", sum);

	return 0;
}