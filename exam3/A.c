#include<stdio.h>

int main(void) {
	long long int l, r, i,count=0;

	scanf("%lld %lld", &l, &r);

	switch (l % 10) {
	case 1:count = count + 4; break;
	case 2:count = count + 3; break;
	case 3:count = count + 3; break;
	case 4:count = count + 2; break;
	case 5:count = count + 2; break;
	case 6:count = count + 2; break;
	case 7:count = count + 2; break;
	case 8:count = count + 1; break;
	case 9:count = count + 0; break;
	}

	switch (r % 10) {
	case 1:count = count + 1; break;
	case 2:count = count + 1; break;
	case 3:count = count + 2; break;
	case 4:count = count + 2; break;
	case 5:count = count + 2; break;
	case 6:count = count + 2; break;
	case 7:count = count + 3; break;
	case 8:count = count + 4; break;
	case 9:count = count + 4; break;
	}
	
	if ((l%10)!=0)
		count = count + ((r - (r % 10)) - (l - (l % 10) + 10)) / 10 * 4;
	else
		count = count + ((r - (r % 10)) - l) / 10 * 4;

	printf("%lld", count);
	
	return 0;
}