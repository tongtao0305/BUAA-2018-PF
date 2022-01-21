#include<stdio.h>

int main(void) {
	int i, j, k;
	
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %d%c ",i,j,i*j," \n"[j==i]);//注意这个换行的用法
		}
	}
	
	return 0;
}