#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char s[505];
	int t,n,i,j,k,l,r;
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		for (i=1;i<=strlen(s);i++){
			if (strlen(s)%i!=0)
				continue;
			for (j=1;j<strlen(s);j++){
				if (s[j%i]!=s[j]){
					break;
				}
			}
			if (j==strlen(s)){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
