#include<stdio.h>
#include<string.h>
int main(void){
	int i,count=0;
	char s[100];
	
	fgets(s,BUFSIZ,stdin);
	
	for (i=0;i<strlen(s)-3;i++){
		if (s[i]=='t'&&s[i+1]=='l'&&s[i+2]=='s')
			count++;
		if (s[i]=='l'&&s[i+1]=='l'&&s[i+2]=='s')
			count++;
		if (s[i]=='l'&&s[i+1]=='z'&&s[i+2]=='y')
			count++;
	}
	
	if (count==1)
		printf("YES");
	else
		printf("NO");
	
	return 0;
} 
