#include<stdio.h>

int main(void) {
	int count=0,result=0,i;
	int n, m, k;
	
	while (scanf("%d%d%d", &n, &m, &k) == 3) {
		count++;
		while (k >= 0) {
			result = result + n + m * k;
			k--;
		}
		printf("%d\n", result);
		result = 0;
	}
	
	return 0;
}