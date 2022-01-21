#include<stdio.h>
#include<math.h>

int a[2005][2005], sum[2005][2005];

int main(void) {
	int t, k,n,m,i,j;

	scanf("%d %d", &t, &k);
	
	a[0][0] = 1;
	for (i = 1; i <= 2000; i++) {
		a[i][0] = 1;
		for (j = 1; j <= i; j++) 
			a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % k;
	}

	for (i = 0; i <= 2000; i++)
		for (j = 0; j <= 2000; j++)
			sum[i][j] = (i ? sum[i - 1][j] : 0) + (j ? sum[i][j - 1] : 0) - (i*j ? sum[i - 1][j - 1] : 0) + (j <= i && a[i][j] == 0);

	while (t--) {
		scanf("%d %d", &n, &m);
		printf("%d\n", sum[n][m]);
	}
	
	return 0;
}