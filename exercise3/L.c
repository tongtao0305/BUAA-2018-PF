#include<stdio.h>

int main(void) {
	int x,left;
	int i, j, k;
	
	scanf("%d", &x);

	for (i = 1; i <= x; i++) {
		if (i % 2 == 0) {
			for (j = 1; j <= (x*x / 2 + 1) - (i*i / 2 + 1);j++) {
				printf(" ");
			}
			for (j = 1; j <= i * i / 2; j++) {
				printf("$");
			}
			printf("@");
			for (j = 1; j <= i * i / 2; j++) {
				printf("$");
			}
			printf("\n");
		}
		else {
			for (j = 1; j <= (x*x / 2 + 1) - (i*i / 2 + 1);j++) {
				printf(" ");
			}
			for (j = 1; j <= i * i; j++) {
				printf("$");
			}
			printf("\n");
		}
	}
	
	return 0;
}

