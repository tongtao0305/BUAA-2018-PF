#include<stdio.h>
#define LIMIT_MAX 1000

int main(void) {
	int i, j, k;
	int number[10];
	int temp;
	
	for (i = 1; i <= LIMIT_MAX; i++) {
		for (j = 0; j <= 9; j++)
			number[j] = 0;		
		
		temp = i*i;
		while (temp > 0) {
			number[temp % 10]++;
			temp = temp / 10;
		}
		for (j = 0; j <= 9; j++) {
			if (number[j] >= 3) {
				printf("%d\n",i*i);
				break;
			}
		}
	}
	
	return 0;
}