#include<stdio.h>
#include<stdlib.h>
#define maxn 100010
#define mod 1000000007
int q, i, n, fac[maxn], sum[maxn];
int main()
{
	fac[0] = 1;
	for (i = 1; i <= 100000; ++i)
	{
		fac[i] = 1ll * fac[i - 1] * i % mod;
		sum[i] = (sum[i - 1] + fac[i]) % mod;
	}
	scanf("%d", &q);
	while (q--) {
		scanf("%d", &n);
		printf("%d\n", sum[n]);
	}
	return 0;
}
