#include <stdio.h>
#include <math.h>
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}
int main()
{
	int a, b;
	while (~scanf("%d%d", &a, &b))
	{
		int g = gcd(a, b);
		a /= g;
		b /= g;
		int dit = a * a - 4 * b;
		if (dit < 0)
		{
			printf("No Solution\n");
			continue;
		}
		int t = sqrt(dit);
		int k1 = a + t, k2 = a - t;
		if (t*t != dit || (k1 & 1) != 0 || (k2 & 1) != 0)
		{
			printf("No Solution\n");
		}
		else
		{
			printf("%d %d\n", k2 / 2 * g, k1 / 2 * g);
		}
	}
	return 0;
}