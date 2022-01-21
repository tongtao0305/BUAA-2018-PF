#include<stdio.h>

int main(void) {
	double v1, v2;

	scanf("%lf %lf", &v1, &v2);

	if ((v1 / v2) > 1.5)
		printf("Exceed %.lf%%. License Revoked", 100 * (v1 - v2) / v2);
	else if (((v1 / v2) >= 1.1) && ((v1 / v2) < 1.5))
		printf("Exceed %.lf%%. Ticket 200", 100 * (v1 - v2) / v2);
	else if ((v1 / v2) < 1.1)
		printf("OK");

	return 0;
}
