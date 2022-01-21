#include<stdio.h>

int main(void) {
	int c[10];
	int i,temp,count=0;
	
	for (i = 0; i <= 9; i++) {
		scanf("%d", &temp);
		c[i]=temp;
	}
	
	for (i = 1; i <= 9; i++) {
		while (c[i] > 0) {
			printf("%d", i);
			count++;
			c[i]--;
			if (count == 1) {
				while (c[0] > 0) {
					printf("0");
					c[0] --;
				}
			}
		}
	}
	return 0;
}