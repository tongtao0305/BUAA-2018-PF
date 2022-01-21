#include<stdio.h>

int main(void) {
	int n,i;
	int x1, x2, y1, y2, r1, r2;
	
	scanf("%d", &n);

	while(n--)  {
		scanf("%d %d %d\n%d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if ((x1 == x2) && (y1 == y2) && (r1 == r2))

			printf("D\n");//相等
		else if ((r1 + r2)*(r1 + r2) == (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))
			printf("Q\n");//外切
		else if ((r1-r2)*( r1 - r2 )== (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))
			printf("W\n");//内切
		else if (((r1 - r2)*(r1 - r2) < (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))&&((r1 + r2)*(r1 + r2) > (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)))
			printf("E\n");//相交
		else if ((r1 + r2)*(r1 + r2) <(x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))
			printf("R\n");//相离
		else if ((r1 - r2)*(r1 - r2) > (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))
			printf("F\n");//内含
	}
	
	return 0;
}