#include<stdio.h>

int main(void) {
	int n,max=0,temp,i;
	int a[3000] = {0};
	int *p;
	
	p = &a[1500];
	scanf("%d", &n);
	
	while (n--) {
		scanf("%d", &temp);
		p[temp]++;
		if (p[temp] > max)
			max = p[temp];
	}

	printf("%d", max);
	
	return 0;
}