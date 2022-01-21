#include<stdio.h>

int main(void){
	
	int a,b,c,temp;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b){
		temp=a;
		a=b;
		b=temp;
	}
	
	if (a>c){
		temp=a;
		a=c;
		c=temp;
	}
	
	if (b>c){
		temp=b;
		b=c;
		c=temp;
	}
	
	if (a+b<=c)
		printf("not a triangle!");
	else{
		if (a==b&&a==c)
			printf("equilateral triangle!");
		else if (a==b||a==c||b==c)
			printf("isosceles triangle!");
		else
			printf("regular triangle!");
	}
	
	return 0;
} 
