#include<stdio.h>

int main(void){
	int x,y;

	scanf("%d",&x);

	if (x<1)
		y=x;
	else if(1<=x&&x<10)
		y=2*x-3;
	else
		y=3*x-5;
	
	printf("%d",y);

	return 0;
}
