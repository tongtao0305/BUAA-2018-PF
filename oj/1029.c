#include<stdio.h>
#include<string.h>
int main(void){
	char s[1005],temp;
	int n,len,count=1,i,j,k;
	scanf("%s",s);
	len=strlen(s);
	
	if (len%2!=0)
		printf("NO");
	else{	
		for (i=0;i<=(len/2)-1;i++){
			j=i+(len/2);
			if (s[i]!=s[j]){
				printf("NO");
				break;
			}
			if (i==(len/2)-1)
				printf("YES");
		}	
	}

	return 0;
}
