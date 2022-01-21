#include<stdio.h>
#include<string.h>
int main(void){
	int t,i,j,k,count;
	char former[1005],latter[1005];
	
	scanf("%d",&t);
	
	while(t--){
		count=0;
		scanf("%s",former);
		for (i=0;i<strlen(former);i++){
			if (('a'<=former[i]&&former[i]<='z')||('A'<=former[i]&&former[i]<='Z')){
				latter[count]=former[i];
				count++;
			}
		}
		for (i=0;i<strlen(former);i++){
			if ('0'<=former[i]&&former[i]<='9'){
				latter[count]=former[i];
				count++;
			}
		}
		for (i=0;i<strlen(former);i++){
			if ((33<=former[i]&&former[i]<=47)||(58<=former[i]&&former[i]<=64)||(91<=former[i]&&former[i]<=96)||(123<=former[i]&&former[i]<=126)){
				latter[count]=former[i];
				count++;
			}
		}
		for (i=0;i<strlen(former);i++)
			printf("%c",latter[i]);
		printf("\n");
	}
	
	return 0;
}
