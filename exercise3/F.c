#include<stdio.h>

int min(int, int);

int main(void) {
	int x,remain;
	int ap,bp,cp,dp,ep;
	int a=1, b=1, c=1, d=1, e=1;
	
	scanf("%d", &x);
	
	remain = x - 5;
	
	for (ap = min(remain,5); ap >= 0; ap--) {
		for (bp = min(remain-ap,5); bp >= 0; bp--) {
			for (cp = min(remain-ap-bp,5); cp >= 0; cp--) {
				for (dp = min(remain-ap-bp-cp,5); dp >= 0; dp--) {
					ep = remain - ap - bp - cp - dp;
					if ((ep<=5)&&(ep>=0))
						printf("%d%d%d%d%d\n", a + ap, b + bp, c + cp, d + dp,e+ep );
				}
			}
		}
	}
	
	return 0;
}

int min(int a, int b) {
	if (a >= b)
		return b;
	else
		return a;
}