#include<stdio.h>

int main(void){
	char s[1005];
	int count[150];
	int i,j,k;
	
	fgets(s,1000,stdin);
	
	for (i=0;i<150;i++)
		count[i]=0;
	
	for (i=0;i<strlen(s);i++){
		count[s[i]]++;
	}
	
	for (i='0';i<='9';i++)
		printf("%d ",count[i]);
	printf("\n");
	
	for (i='a';i<='z';i++)
		printf("%d ",count[i]);
	printf("\n");
	
	for (i='A';i<='Z';i++)
		printf("%d ",count[i]);
	printf("\n");
	

	return 0;
}
