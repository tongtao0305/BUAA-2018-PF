#include<stdio.h>
#include<string.h>
int main(void){
	char a[105];
	char b[105];
	int t,i,j,k,lena,lenb,count;
	
	scanf("%d",&t);
	
	while(t--){
		count=0;
		scanf("%s %s",a,b);
		lena=strlen(a);
		lenb=strlen(b);
		
		if (strcmp(a,b)==0){
			printf("0\n");	
			continue;		
		}

		for (i=1;i<=strlen(b);i++){
			a[strlen(a)-i]-=(b[strlen(b)-i]-'0');
		}
		
		for (i=strlen(a)-1;i>=1;i--){
			if (a[i]<'0'){
				a[i]+=10;
				a[i-1]-=1;
			}	
		}
		
		for (i=0;i<strlen(a);i++){
			if ('0'<a[i]&&a[i]<='9'&&count==0)
				count=1;
			if (count==1)
				printf("%c",a[i]);
		}
		printf("\n");			
	}
	

	
	
	return 0;
}
