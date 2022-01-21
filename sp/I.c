#include<stdio.h>
#include<string.h>

int main(void) {
	char fy[201][201];
	char result[201][201];
	int n,m,i;
	int count;
	
	scanf("%s", &fy[0]);
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		count = 0;
		scanf("%s", &fy[i]);
		
		for (m = 0; m < 201; m++) {
			if (fy[i][m] != fy[i-1][m])
				count++;
		}

		if (count <= 2)
			strcpy(result[i] , fy[i - 1]);
		else
			strcpy(result[i] , "xingxing, ni daduan fudu le!");
	}
	
	for (i = 1; i <= n; i++) {
		printf("%s\n", result[i]);
	}

	return 0;
}