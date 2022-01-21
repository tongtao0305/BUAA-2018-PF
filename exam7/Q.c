#include<stdio.h>

int result[1000001];

 int main(void) {
	int n, m;
	int i, j, k,count;
	int temp,last=1;

	scanf("%d %d", &n, &m);

	for (i = 1; i <= n; i++)
		result[i] = 1;

	for (i = 1; i <= n; i++) {
		count = m;
		temp = last;
		while (count>0) {
			if (result[temp] == 1) {
				count--;
			}
			if(count==0)
				result[temp] = 0;
			temp++;		
			if (temp == n)
				temp=1;
		}
		last = temp;
		printf("%d ", temp-1);
	}

	for (i = 1; i <= n; i++)
		if (result[i] == 1)
			printf("%d ", i);

	return 0;
}

