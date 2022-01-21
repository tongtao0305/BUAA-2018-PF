#include<stdio.h>

int main(void){
	int n,i,j,k,count1=0,count2=0;
	double num[50];
	double pj_qt=0,pj_jg=0,pj_yx=0;
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%lf",&num[i]);
		pj_qt=pj_qt+num[i];
		if (num[i]>=60){
			pj_jg=pj_jg+num[i];
			count1++;
		}
		if (num[i]>=90){
			pj_yx=pj_yx+num[i];
			count2++;
		}
	}
	
	printf("%.3lf\n",pj_qt/n);
	
	if (count1==0){
		printf("0.000\n");
	}
	else{
		printf("%.3lf\n",pj_jg/count1);
	}
	
	if (count2==0){
		printf("0 0.000");
	}
	else{
		printf("%d %.3lf",count2,pj_yx/count2);
	}
	
	return 0;
}
