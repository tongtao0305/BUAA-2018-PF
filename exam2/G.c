#include<stdio.h>

int main(void) {
	int temp;


	while (scanf("%d",&temp) != EOF)
	{
		if (((temp % 100 != 0) && (temp % 4 == 0)) || (temp % 400 == 0))
			printf("1\n");
		else
			printf("0\n");
	}
	
	return 0;
}