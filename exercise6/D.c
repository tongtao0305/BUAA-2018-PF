#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
char temp[10001];
char total[10001];
int pd(char);
int main(void) {
	int i=0, l=-1,r=-1, count=0,sum=0;

	while (gets(temp)!=NULL) 
	{
		strcat(total, temp);
		sum = sum + strlen(temp);
	}

	//printf("%d\n%s\n",sum, total);

	while (i <= sum) {
		if (pd(total[i]) == 3)
			if (l == -1) {
				l == i; r = i;
			}
			else
				r = i;
		else if (pd(total[i]) == 1) {
			if (r != -1) {
				count++;
				l = -1;
				r = -1;
			}
		}
		i++;
	}

	printf("%d", count+1);
	return 0;
}

int pd(char c) {
	if (c == ',' || c == '.' || c == '!' || c == '?' || c == ';' || c == ' ')
		return 1;
	else if (c == '\r\n' || c == '\t')
		return 2;
	else
		return 3;
}