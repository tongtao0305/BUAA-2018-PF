#include <stdio.h>
int main()
{
	int n, m, p, q;
	scanf("%d%d%d%d", &n, &m, &p, &q);
	int x = 1, y = 1, direct = 0, cir = 0, ans = 0; // 0: right 1: down 2: left 3: up
	while (y != p || x != q) {
		ans++;
		switch (direct) {
		case 0: x++;
				if (x + 1 == m - cir + 1) {
					direct = 1;
				}
			break;
		case 1: y++;
			if (y + 1 == n - cir + 1) {
				direct = 2;
			}
			break;
		case 2: x--;
			if (x - 1 == cir) {
				direct = 3;
			}
			break;
		case 3: y--;
			if (y - 1 == cir + 1) {
				direct = 0;
				cir++;
			}
			break;
		}
	}
	printf("%d\n", ans + 1);
	return 0;
}