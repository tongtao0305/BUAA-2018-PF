#include<stdio.h>

int main(void) {
	char point;
	double n,c,f;

	while (scanf("%lf%c", &n, &point)!=EOF) {

		if (point == 'C') {
			c = n;
			f = 9.0 / 5.0*c + 32;
			if (c < -273.15)
				printf("Out of Range\n");
			else
				printf("%.2lfF\n", f);
		}
		else {
			f = n;
			c = 5.0 / 9.0*(f- 32);
			if (c < -273.15)
				printf("Out of Range\n");
			else
				printf("%.2lfC\n", c);
		}
	}
	
	return 0;
}