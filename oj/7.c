#include<stdio.h>

int main(void) {
	int n,m,i,count=0;
	
	while (scanf("%d", &n) == 1) {
		m = 2 * n - 1;
		while (m >= 0) {
			for (i = 1; i <= ((2*n-1-m)/2);i++) {
				printf(" ");
			}
			for (i = 1; i <= m; i++) {
				printf("#");
			}
			printf("\n");
			m = m - 2;
		}
		
	}
	
	return 0;
}