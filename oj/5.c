#include<stdio.h>

int main(void) {
	char a[1001];
	int result[2] = { 0,0 }, count = 0;

	scanf("%s", a);
	
	while (a[count] != '\0') {
		result[0] = result[0] + a[count]-'0';
		count++;
	}

	count = 0;
	while (result[count] >= 10) {
		while (result[count] > 0) {
			result[1 - count] += (result[count] % 10);
			result[count] = result[count]/ 10;
		}
		count = 1 - count;
		result[1 - count] = 0;
	}
	
	printf("%d", result[count]);
	
	return 0;
}