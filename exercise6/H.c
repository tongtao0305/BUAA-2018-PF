#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main(void) {
	int a, b,number=0;
	int i, j, k,count=0;
	char c[101] = {' '};
	char d[101] = { ' ' };
	
	scanf("%d %d %s", &a, &b,c);
	
	for (i = 0; i < strlen(c); i++) {
		if ('0'<=c[i]&&c[i]<='9')
			//number = number + (c[i]-'0')*(int)pow(a, strlen(c) - i-1);
			number=number*a+(c[i]-'0');
		else if ('A'<=c[i]&&c[i]<='K')
			//number = number + (c[i] - 'A'+10)*(int)pow(a, strlen(c) - i - 1);
			number=number*a+(c[i]-'A'+10);
	}
	
	while (number > 0) {
		if (0<=number%b&&number%b<=9)
			d[count] =( number % b) + '0';
		else
			d[count] = (number % b) + 'A'-10;
		number = number / b;
		count++;
	}

	for (i = count-1; i >= 0; i--) {
		printf("%c", d[i]);
	}
	
	return 0;
}