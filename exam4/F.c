#include<stdio.h>

int main(void) {
	//2018年1月1日是周一
	int y, m, d;
	int i, j, k;
	long long int count=0;

	while (scanf("%d %d %d", &y, &m, &d) != EOF) {

		for (i = 2018; i < y; i++) {
			if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0)))
				count = count + 366;
			else
				count = count + 365;
		}

		for (i = 1; i < m; i++) {
			if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
				count = count + 31;
			else if ((i == 4) || (i == 6) || (i == 9) || (i == 11))
				count = count + 30;
			else {
				if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)))
					count = count + 29;
				else
					count = count + 28;
			}
		}

		count = count + d - 1;

		count = count % 7 + 1;

		if ((count == 6) || (count == 7))
			printf("DDL is the primary productive force.\n");
		else
			printf("All work and no play makes Max a dull boy.\n");

		count = 0;
	}

	return 0;
}