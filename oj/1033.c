#include<stdio.h>

int main(void) {
	int fz[25][25];
	int count[25][25];
	int n, i, j, k, x, y, fx = 1;//xy为当前的坐标值，fx为移动的方向 

	for (i = 0; i < 25; i++) {
		for (j = 0; j < 25; j++) {
			count[i][j] = 0;
		}
	}

	scanf("%d", &n);
	x = 1; y = n;

	for (i = 1; i <= n * n; i++) {
		//填空
		if (fx == 1) {
			fz[x][y] = i;
			count[x][y] = 1;
			x++;
		}
		else if (fx == 2) {
			fz[x][y] = i;
			count[x][y] = 1;
			y--;
		}
		else if (fx == 3) {
			fz[x][y] = i;
			count[x][y] = 1;
			x--;
		}
		else if (fx == 4) {
			fz[x][y] = i;
			count[x][y] = 1;
			y++;
		}

		//转向 
		if (fx == 1 && (count[x + 1][y] == 1 || x == n)) 
			fx = 2;
		else if (fx == 2 && (count[x][y - 1] == 1 || y == 1))
			fx = 3;
		else if (fx == 3 && (count[x - 1][y] == 1 || x == 1))
			fx = 4;
		else if (fx == 4 && (count[x][y + 1] == 1 || y == n))
			fx = 1;

	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", fz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
