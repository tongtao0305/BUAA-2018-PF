#include<stdio.h>
long long int a[10001];
int main(void) {

	long long int i = 0,count;

	while (scanf("%lld", &a[i])!=EOF) {
		i++;
		count = i;
	}

	for (i = count-1; i >= 0; i--) {
		printf("%lld\n", a[i]);
	}

	return 0;
}