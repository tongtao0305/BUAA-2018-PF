#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char s[101][1001];
int len[101][1001];

void eat(char[], int[]);

int main(void) {
	int n;
	int i,j,k;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%s", s[i]);
		for (j = 0; j < strlen(s[i]); j++) {
			scanf("%d", &len[i][j]);
		}
	}
	
	for (i = n; i >= 1; i--) {
		eat(s[i], len[i]);
	}
	
	return 0;
}

void eat(char ch[], int a[]) {
	int number = 0;
	int i;
	int temp=0;
	int count[1001];
	int count2 = 0;

	for (i = 0; i < strlen(ch); i++)
		count[i] = 1;
	
	while (count2 < strlen(ch)) {
		if (count[temp]==1&&temp<strlen(ch)) {
			printf("%c", ch[temp]);
			count2++;
			count[temp] = 0;
			temp = a[temp]-1;
		}
		else {
			temp = 0;
			while (count[temp]==0)
				temp++;
		}
	}

	return 0;
}

