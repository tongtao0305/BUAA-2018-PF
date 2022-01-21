#include<stdio.h>

int main(void) {
	int n,h,m;
	double t, s;

	scanf("%d", &n);

	if (n % 12 == 11) {
		printf("0:0:0.0000000");
	}
	else {
		t = (n % 12) * 30;
		t = t / (0.1 - (1.0 / 120.0));

		h = n % 12;
		m = (int)t / 60;

		while (t > 60) {
			t = t - 60;
		}
		s = t;

		printf("%d:%d:%.7f", h, m, s);
	}

	return 0;
}