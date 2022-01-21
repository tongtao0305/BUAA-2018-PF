#include<stdio.h>

int main(void){
	double n1,n2;
	char t1,t2;
	
	scanf("<%lf><%c>",&n1,&t1);
	
	if (t1=='F'){
		n2=(n1-32.0)*5.0/9.0;
		t2='C';
	}
	else{
		n2=n1*9/5.0+32.0;
		t2='F';
	}
	
	printf("<%.0lf><%c>=<%.1lf><%c>",n1,t1,n2,t2);
	
	return 0;
}
