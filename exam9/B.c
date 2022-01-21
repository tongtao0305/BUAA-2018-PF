#include<stdio.h>

int main(void) {
	int n,temp_score;
	
	scanf("%d", &n);
	
	while (n--) {
		scanf("%d", &temp_score);
		if (85 <= temp_score && temp_score <= 100)
			printf("A\n");
		else if (70 <= temp_score && temp_score <= 84)
			printf("B\n");
		else if (60 <= temp_score && temp_score <= 69)
			printf("C\n");
		else
			printf("D\n");
	}
	
	
	return 0;
}