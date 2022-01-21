#include<stdio.h>
#include<math.h>

int main(void) {
	int count;
	long long int n,temp=0,sum=0;

	while (scanf("%lld", &n) != EOF) {
		temp = abs(n);

		if (temp <= 9)
			count = 1;
		else if ((10 <= temp) && (temp <= 99))
			count = 2;
		else if ((100 <= temp) && (temp <= 999))
			count = 3;
		else if ((1000 <= temp) && (temp <= 9999))
			count = 4;
		else if ((10000 <= temp) && (temp <= 99999))
			count = 5;
		else if ((100000 <= temp) && (temp <= 999999))
			count = 6;

		while (temp > 0) {
			sum = sum + pow((temp % 10), count);
			temp = temp / 10;
		}

		if (sum == n)
			printf("guna\n");
		else
			printf("%d\n", sum);
		sum = 0;
	}
	
	return 0;
}
