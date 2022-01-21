#include<stdio.h>

int main(void){
	int sanhao,a1,a2,a3,b1,b2,b3,count=0;
	double gpa;
	
	scanf("%d %lf",&sanhao,&gpa);
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&b1,&b2,&b3);	
	
	if ((sanhao==1&&(gpa>=3.5||((a1+a2+a3>=240)&&(b1+b2+b3>=240))))||(sanhao==0&&(gpa>=3.6||((a1+a2+a3>255)&&(b1+b2+b3>255)))))
		printf("APPROVED");
	else
		printf("REJECTED");	
	
	return 0;
}
