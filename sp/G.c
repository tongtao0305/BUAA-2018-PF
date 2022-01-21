#include<stdio.h>
#include<math.h>

int main(void) {
	long long int a, b;
	double c, d;

	if ((scanf("%lld %lld", &a, &b) == 2) && (b != 0) &&((-pow(2,31)) <= a)&&(a<= (pow(2,31) - 1)) && ((-pow(2, 31)) <= b) && (b<= (pow(2, 31) - 1))) {
		if (getchar()=='\n') {
			c = a;
			d = b;
			printf("%ld", (long int)floor(c / d));
		}
		else
			printf("error");
	}
	else
		printf("error");

	return 0;
}