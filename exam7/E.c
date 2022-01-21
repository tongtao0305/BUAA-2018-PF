#include<stdio.h>

int main(void) {
	char d[100001] = "";
	int x,count;
	int i, j, k;
	long long int a, b,number;
	
	while (scanf("%lld %lld %d", &a, &b, &x)!=EOF) {
		number = a + b;

		count = 0;
		
		if (a == 0 && b == 0) {
			printf("0\n");
			continue;
		}
		
		while (number > 0) {
			if (0 <= number % x && number % x <= 9)
				d[count] = (number % x) + '0';
			else
				d[count] = (number % x) + 'A' - 10;
			number = number / x;
			count++;
		}

		for (i = count - 1; i >= 0; i--) {
			printf("%c", d[i]);
		}
		printf("\n");
	}
	
	return 0;
}
