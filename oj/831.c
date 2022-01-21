#include<stdio.h>
#include<string.h>

char string[10][50];
int count[10] = {0};

int main(void) {
	int n,check;
	int i, j, k;

	while(scanf("%d", &n) != EOF) {
		getchar();
		check = 0;
		for (i = 0; i < 10; i++)
			count[i] = 0;
		for (i = 0; i < n; i++) {
			fgets(string[i],BUFSIZ,stdin);
			if (string[i][0] == '(' && string[i][strlen(string[i])-2] == ')'){
				count[i] = 1;
				check++;
			}
		}
		printf("%d\n", check);
		for (i = 0; i < n; i++) {
			if (count[i] == 1)
				printf("%s",string[i]);
		}
		printf("----------\n");
	}
	
	return 0;
}