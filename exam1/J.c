#include<stdio.h>

int main(void) {
	long int i, j,result;

	scanf("%ld %ld", &i, &j);
	
	if (i %j == 0)
		result = i / j;
	else
		result = (i / j) + 1;

	printf("%ld", result);

	return 0;
}