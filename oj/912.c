#include<stdio.h>

int main(void){
	int t,y,m,d,sum_day,result;
	int i,j,k;
	
	scanf("%d",&t);
	
	while(t--){
		sum_day=0;
		scanf("%d %d %d",&y,&m,&d);
		
		for (i=2000;i<y;i++){
			if ((i%100!=0&&i%4==0)||(i%400==0)){
				sum_day+=366;
			}
			else{
				sum_day+=365;
			}
		}
		
		for (i=1;i<m;i++){
			if (i==1||i==3||i==5||i==7||i==8||i==10||i==12){
				sum_day+=31;
			}
			else if(i==2){
				if ((y%100!=0&&y%4==0)||(y%400==0)){
					sum_day+=29;
				}
				else{
					sum_day+=28;
				}
			}
			else {
				sum_day+=30;
			}
		}
		
		sum_day+=d-1;
		
		result=(sum_day%7+6)%7;
		
		if (result==0)
			result=7;
			
		printf("%d\n",result);
	}
	
	return 0;
}
