#include<stdio.h>

int main(void) {
	int a=1,b=2;
	long long int ret=0,x,y,k;
	
	scanf("%lld %lld %lld", &x, &y, &k);
	
	switch (k) {
	case 2: ret = 4 * a * a;break;
	case 3: ret = 8 * a * (b - a);break;
	case 4: ret = 4 * (b - a) *(b - a) + 2 * a * (x - b - b + y - b - b);break;
	case 6: ret = 2 * (b - a) * (x - b - b + y - b - b);break;
	case 8: ret = (x - b - b) * (y - b - b);break;
	}
	
	printf("%lld\n", ret);

	return 0;
}