#include<stdio.h>
int wenming[2001];
int main(void){
	int n,k;
	int i,j;
	long long int temp=0,max=0;
	double result;
	
	scanf("%d %d",&n,&k);
	
	for (i=1;i<=n;i++){
		scanf("%d",&wenming[i]);
		wenming[n+i]=wenming[i];
	}
	
	for (i=1;i<=n;i++){
		temp=0;
		for (j=i;j<i+k;j++){
			temp=temp+wenming[j];		
		}
		if (temp>max){
			max=temp;

		}
	}
	result=(double)max*1.0/(double)k;
	printf("%.2lf",result);
	
	return 0;
}
