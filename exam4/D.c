#include<stdio.h>

int main(void) {
	int n;
	int i, j, k;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) {
			printf("%c", j + 64);
		}
		for (j = 1; j <= ((2 * n - 1) - 2 * (i-1));j++) {
			printf("%c", i + 64);
		}
		for (j = i-1; j >=1; j--) {
			printf("%c", j + 64);
		}
		printf("\n");
	}
	
	for (i = n - 1; i >=1; i--) {
		for (j = 1; j < i; j++) {
			printf("%c", j + 64);
		}
		for (j = 1; j <= ((2 * n - 1) - 2 * (i - 1)); j++) {
			printf("%c", i + 64);
		}
		for (j = i - 1; j >= 1; j--) {
			printf("%c", j + 64);
		}
		printf("\n");
	}
	
	
	
	return 0;
}