#include<math.h>
#include<stdio.h>
int main()
{
	long long int n, i, j, k;
	scanf("%lld", &n);
	k = (long long int)(sqrt((double)n * 2)) + 10;
	for (; k >= 1; k--)if (k*(k + 1) < n * 2)break;
	j = n - k * (k + 1) / 2;
	if (k & 1)printf("%lld/%lld\n", j, k + 2 - j);
	else printf("%lld/%lld\n", k + 2 - j, j);
	return 0;
}
