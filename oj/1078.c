#include<stdio.h>
#include<string.h>
int main(void){
	int t,b,i,lena,count=0;
	char a[105];
	int num[115];
	scanf("%d",&t);
	
	while(t--){
		count=0;
		scanf("%s %d",&a,&b);
		
		if (strcmp(a,"0")==0||b==0){
			printf("0\n");
			continue;
		}
		
		lena=strlen(a);
		for (i=0;i<115;i++)
			num[i]=0;
		for (i=lena-1;i>=0;i--)
			num[i+10]=(a[i]-'0')*b;
		for (i=lena+9;i>=1;i--){
			if (num[i]>=10){
				num[i-1]+=(num[i]/10);
				num[i]=num[i]%10;
			}
		} 
		for (i=0;i<=lena+9;i++){
			if (num[i]!=0&&count==0)
				count=1;
			if (count==1)
				printf("%d",num[i]);
		}
		printf("\n");
	}
	
	return 0;
}
