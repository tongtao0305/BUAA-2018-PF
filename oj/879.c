#include<stdio.h>

int main(void) {
	int a[4] = {0},count=0;
	int n,i;
	
	scanf("%d", &n);
	
	while (n > 0) {
		a[count] = n % 10;
		n = n / 10;
		count++;
		if (count == 4)
			break;
	}
	
	for (i = 0; i < 4; i++) {
		n = n * 10 + a[i];
	}
	
	printf("%d", n);
	
	return 0;
}