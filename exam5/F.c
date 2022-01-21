#include<stdio.h>

int main(void) {
	int i;
	int x, y;
	long long int sumx=0, sumy=0;

	while (scanf("%d %d", &x, &y) != EOF) {
		if (1 <= x && x <= 2000 && 1 <= y && y <= 2000 && x % y != 0 && y % x != 0 && x != 1837 && y != 1837) {
			sumx = sumx + x;
			sumy = sumy + y;
		}
	}

	printf("%lld %lld", sumx, sumy);
	
	return 0;
}