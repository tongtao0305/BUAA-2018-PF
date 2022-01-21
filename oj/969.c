#include<stdio.h>
#include<string.h>
int main(void){
	char s[1005];
	int i=-1,j,k;

	do{
		i++;
		s[i]=getchar();
	}while(s[i]!='*');

	for(i--;i>=0;i--)
		putchar (s[i]);
	
	return 0;
}
