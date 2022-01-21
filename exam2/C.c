#include<stdio.h>
#include<math.h>

int main(void) {
	long long int number[4];
	double temp;
	long long int i,m,n,count=0,temp2;
	
	scanf("%lld %lld %lld %lld", &number[0], &number[1], &number[2], &number[3]);
	
	for (m = 0; m <= 3; m++) {
		for (n = 0; n <= 60; n++) {
			temp2 = (int)pow(2, n);
			if (number[m] == temp2) {
				count = 1;
				printf("Yes\n");
				break;
			}
		}
		if (count == 0)
			printf("No\n");
		count = 0;
	}
	
	return 0;
}