#include<stdio.h>

int main(void){
	int t,number,i,count=0;
	
	scanf("%d",&t);
	
	while(t--){
		count=0;
		scanf("%d",&number);
		if (number==1)
			count=1;	//����1����������Ҫ�ر��� 
		else{
			for (i=2;i<number;i++){
				if (number%i==0){
					count=1;
					break;
				}
			}
		}
		if (count==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}	
	
	return 0;
}
