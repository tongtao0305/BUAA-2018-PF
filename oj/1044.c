#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	int x,n;
	double y;
	
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		y = asin(x / (1.0 + x))*2.33 + pow(x + 2, 3);
		printf("%.2lf\n", y);
	}
	
	return 0;
}