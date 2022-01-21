#include<stdio.h>
	char a[10000001];
int main(void) {

	long long int result[10001];
	int count = 0,i;

	scanf("%s", a);

	for (i = 0; i <= 100; i++) {
		result[i] = 0;
	}

	while (a[count] != '\0') {
		result[0] = result[0] + a[count] - '0';
		count++;
	}
	count = 0;

	while (result[count] >= 10) {
		while (result[count] > 0) {
			result[count + 1] += (result[count] % 10);
			result[count] /= 10;
		}
		count++;
	}

	printf("%lld", result[count]);

	return 0;
}