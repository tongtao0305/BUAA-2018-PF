#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int t,x;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &x);
		switch ((x-1) / 100) {
		case 5:printf("A\n"); break;
		case 4:printf("B\n"); break;
		case 3:printf("C\n"); break;
		case 2:printf("D\n"); break;
		default:printf("E\n");
		}
	}
	
	return 0;
}