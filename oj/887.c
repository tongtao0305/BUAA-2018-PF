#include<stdio.h>

int main(void){
	int n1,n2,n3,n4,n5;
	
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
	if (n1<n2&&n2<n3&&n3>n4&&n4>n5)
		printf("Yes");
	else
		printf("No");
	

	return 0;
}
