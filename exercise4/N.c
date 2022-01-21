#include<stdio.h>
#include<math.h>
int count(int,int);
int sum=0;
int main(void) {
	int x;
	scanf("%d", &x);
	count(x, 7);
	printf("%d", sum);
	return 0;
}

int count(int number,int n) {
	int i;

	if ((n == 0) || (number == 0)) 
		sum++;
	else if (number==1)
		sum++;
	else {
		for (i = n; i > 0; i--) {
			if (number >= (int)pow(2, i)) {
				count(number, i - 1);
				count(number - (int)pow(2, i), i);
				//printf("将(%d,%d)转化成(%d,%d)(%d,%d)\n", number, n, number, i - 1, number - (int)pow(2, i), i);
				break;
			}
		}
	}
	return 0;
}