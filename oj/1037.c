#include<stdio.h>

int main(void){
	int a,b,c,x,y,z,count=0;
	scanf("%d %d %d %d %d %d",&a,&x,&b,&y,&c,&z);
	
	while(1){
		x+=a;
		while(y<x){
			y+=b;
		}
		if (y==x){
			while(z<x)
				z+=c;
			if (z==y){
				printf("%d",z);
				count=1;
				break;
			}
		}
		if (count==1)
			break;
	}
	
	return 0;
}
