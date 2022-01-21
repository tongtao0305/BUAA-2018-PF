#include<stdio.h>

int main(void) {
	int n, m,i,j;
	int count=0;

	scanf("[%d,%d]", &n, &m);

	for (i = n; i <= m; i++) {
		for (j = 2; j < i; j++) {
			if (i%j == 0) {
				count = 1;				
				break;
			}
		}
		if (count == 0) {
			printf("%d ", i);
		}
		count = 0;
	}
	
	return 0;
}