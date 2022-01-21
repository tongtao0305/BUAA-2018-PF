#include<stdio.h>

int main(void) {
	char a[9];
	int i;
	
	scanf("%s", a);
	
	a[8] = (((a[0] - '0') * 9 + (a[1] - '0') * 8 + (a[2] - '0') * 7 + (a[3] - '0') * 6 + (a[4] - '0') * 5 + (a[5] - '0') * 4 + (a[6] - '0') * 3 + (a[7] - '0') * 2) % 10) + '0';
	
	for (i=0;i<9;i++)
		printf("%c", a[i]);
	
	return 0;
}