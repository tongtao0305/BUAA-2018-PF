#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
char temp[10001];
char total[10001];
int number[10001];
int pd(char);
int main(void) {
	int i = 0, l = -1, r = -1, count = 0, sum = 0;

	while (gets(temp) != NULL)
	{
		strcat(total, temp);
		sum = sum + strlen(temp);
	}

	for (i = 0; i < sum; i++) {
		if (pd(total[i]) == 2)
			number[i] = number[i - 1];
		else
			number[i] = pd(total[i]);
	}

	for (i = 0; i < sum; i++) {
		if (number[i] == 1 && number[i - 1] == 3)
			count++;
	}

	printf("%d", count + 1);
	return 0;
}

int pd(char c) {
	if (c == ',' || c == '.' || c == '!' || c == '?' || c == ';' || c == ' ')
		return 1;
	else if (c == '\n' || c == '\t')
		return 2;
	else
		return 3;
}