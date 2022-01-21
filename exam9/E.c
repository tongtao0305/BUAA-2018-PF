#include<stdio.h>
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)

int main(void) {
	int n, w, h;
	int x1, x2, y1, y2;
	unsigned long long int screen[100][100],color;
	int i, j, k;
	scanf("%d %d %d", &n, &w, &h);
	
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			screen[i][j] = 0xFFFFFF;
		}
	}
	
	while (n--) {
		scanf("%d %d %d %d %llu", &x1, &y1, &x2, &y2, &color);
		for (i = Min(x1,x2); i <= Max(x1,x2); i++) {
			for (j = Min(y1,y2); j <= Max(y1,y2); j++) {
				screen[i][j] = color;
			}
		}
	}
	
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			printf("#%06X ", screen[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}