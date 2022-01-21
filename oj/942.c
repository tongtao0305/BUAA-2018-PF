#include<stdio.h>
#include<string.h>
int main(void){
	int n,count=0;
	int i;
	char s[105];
	
	scanf("%d",&n);
	getchar();
	getchar();
	fgets(s,BUFSIZ,stdin);
	
	for (i=0;i<strlen(s)-1;i++){
		if (s[i]=='1')
			break;
	}
	
	for (i;i<strlen(s)-1;i++){
		if (s[i]=='0')
			count++;
	}
	
	if (count>=7)
		printf("YES");
	else
		printf("NO");
	
	
	return 0;
}
