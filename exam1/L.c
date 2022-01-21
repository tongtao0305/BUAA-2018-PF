#include<stdio.h>

int main(void) {
	int number[6];
	int i,x,a,b;
	double y=0;

	for (i = 1; i <= 5; i++) {
		scanf("%d", &number[i]);
		y = y + number[i];
	}

	y =y / 5.0;

	for (a = 1; a < 5; a++) {
		for (b = 5; b >= a; b--) {
			if (number[b] < number[a]) {
				number[0] = number[a];
				number[a] = number[b];
				number[b] = number[0];
			}
		}
	}

	printf("%d\n", number[3]);
	printf("%.2f", y);

	return 0;
}