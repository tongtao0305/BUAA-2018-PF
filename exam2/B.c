#include<stdio.h>

int main(void) {
	int y1, y2, m1, m2, d1, d2;

	scanf("%d %d %d\n%d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);

	if ((m2 == m1) && (d2 == d1)&&(y1<y2))
		printf("Anniversary!");
	else {
		switch (d2) {
		case 1:
			printf("%dst ", d2);
			break;
		case 2:
			printf("%dnd ", d2);
			break;
		case 3:
			printf("%drd ", d2);
			break;
		case 21:
			printf("%dst ", d2);
			break;
		case 22:
			printf("%dnd ", d2);
			break;
		case 23:
			printf("%drd ", d2);
			break;
		case 31:
			printf("%dst ", d2);
			break;
		default:
			printf("%dth ", d2);
		}

		switch (m2) {
		case 1:
			printf("Jan.");
			break;
		case 2:
			printf("Feb.");
			break;
		case 3:
			printf("Mar.");
			break;
		case 4:
			printf("Apr.");
			break;		
		case 5:
			printf("May.");
			break;
		case 6:
			printf("Jun.");
			break;
		case 7:
			printf("Jul.");
			break;
		case 8:
			printf("Aug.");
			break;
		case 9:
			printf("Sept.");
			break;
		case 10:
			printf("Oct.");
			break;
		case 11:
			printf("Nov.");
			break;
		case 12:
			printf("Dec.");
			break;
		}
	}

	return 0;
}