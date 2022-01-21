#include<stdio.h>

int main(void){
	
	int a00,a01,a10,a11,b00,b01,b10,b11,c00,c01,c10,c11;
	
	scanf("%d %d %d %d %d %d %d %d",&a00,&a01,&a10,&a11,&b00,&b01,&b10,&b11);
	
	c00=a00*b00+a01*b10;
	c01=a00*b01+a01*b11;
	c10=a10*b00+a11*b10;
	c11=a10*b01+a11*b11;
	
	printf("%d %d %d %d",c00,c01,c10,c11);
	
	return 0;
}
