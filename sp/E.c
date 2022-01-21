#include<stdio.h>

int main(void) {
	int a;

	scanf("%d", &a);
	
	if ((a != 33) && (a != 39)) {
		if ((97 <= a) && (a <= 122))
			printf("lowercase");
		else if ((65 <= a) && (a <= 90))
			printf("uppercase");
		else if ((48 <= a) && (a <= 57))
			printf("digit");
		else
			printf("other character");
	}

	return 0;
}