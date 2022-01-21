#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

double f(double);

int main(void){
	int n;
	int i,k;
	double j,result=0;
	scanf("%d",&n);
	
	srand(time(NULL));
	for (i=1;i<=1000000;i++){
		j=rand()%1000001;
	//	printf("%.3lf\n",j);
		result=result+f(j/1000000)/1000000;
		i++;
	}
	
	printf("%.3lf",result);
	
	return 0;
} 

double f(double x){
	return sin(x)/x;
}
