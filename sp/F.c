#include<stdio.h>

int main(void) {
	char s[200];
	char a=' ';
	int count=0;

	//scanf("%s", &s);

	while(a='\n'){
		a=getchar();
		if (a=='Y')
			count++;
		if (a == '\n')
			break;
	}

	printf("%d", count);

	return 0;
}