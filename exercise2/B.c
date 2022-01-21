#include<stdio.h>

int main(void) {
	int y, m, d, h;		//用来保存幸运日期及幸运日

	scanf("%d %d %d %d", &y, &m, &d, &h);

	while (h >= 0) {
		if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) {
			//如果月份是1、3、5、7、8、10、12这些有31天的月份

			if ((d < 1) || (d > 31)) {
				printf("Unhappy");
				break;
			}//先判断日有没有超过范围

			if ((0 < d + h) && (d + h <= 31)) {
				printf("%d %d %d", y, m, d + h);
				break;
			}
			else {
				m++;
				h = h - (31 - d+1);				
				d = 1;
				if (m == 13) {
					m = 1;
					y++;
				}
			}
		}
		else if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
			//如果月份是4、6、9、11这些有30天的月份

			if ((d < 1) || (d > 30)) {
				printf("Unhappy");
				break;
			}//先判断日有没有超过范围

			if ((0 < d + h) && (d + h <= 30)) {
				printf("%d %d %d", y, m, d + h);
				break;
			}
			else {
				m++;
				h = h - (30 - d + 1);
				d = 1;
			}
		}
		else if (m == 2) {
			if ((y % 100 != 0) && (y % 4 == 0) || (y % 400 == 0)) {
				//如果是闰年的情况

				if ((d < 1) || (d > 29)) {
					printf("Unhappy");
					break;
				}

				if ((0 < d + h) && (d + h <= 29)) {
					printf("%d %d %d", y, m, d + h);
					break;
				}
				else {
					m++;
					h = h - (29- d + 1);
					d = 1;
				}
			}
			else {
				//如果不是闰年的情况

				if ((d < 1) || (d > 28)) {
					printf("Unhappy");
					break;
				}

				if ((0 < d + h) && (d + h <= 28)) {
					printf("%d %d %d", y, m, d + h);
					break;
				}
				else {
					m++;
					h = h - (28 - d + 1);
					d = 1;
				}
			}
		}
		else {
			printf("Unhappy");
			break;
		}
	}
	
	return 0;
}
