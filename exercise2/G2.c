#include<stdio.h>

int main(void) {
	int x,count;

	scanf("%d", &x);
	count = bitcount(x);
	printf("%d", count);

	return 0;
}

int bitcount(int x) {
	int mask = 0x01;
	int sum = 0;

	sum = sum + (x & mask);
	sum = sum + (x >> 1 & mask);
	sum = sum + (x >> 2 & mask);
	sum = sum + (x >> 3 & mask);
	sum = sum + (x >> 4 & mask);
	sum = sum + (x >> 5 & mask);
	sum = sum + (x >> 6 & mask);
	sum = sum + (x >> 7 & mask);
	sum = sum + (x >> 8 & mask);
	sum = sum + (x >> 9 & mask);
	sum = sum + (x >> 10 & mask);
	sum = sum + (x >> 11 & mask);
	sum = sum + (x >> 12 & mask);
	sum = sum + (x >> 13 & mask);
	sum = sum + (x >> 14 & mask);
	sum = sum + (x >> 15 & mask);
	sum = sum + (x >> 16 & mask);
	sum = sum + (x >> 17 & mask);
	sum = sum + (x >> 18 & mask);
	sum = sum + (x >> 19 & mask);
	sum = sum + (x >> 20 & mask);
	sum = sum + (x >> 21 & mask);
	sum = sum + (x >> 22 & mask);
	sum = sum + (x >> 23 & mask);
	sum = sum + (x >> 24 & mask);
	sum = sum + (x >> 25 & mask);
	sum = sum + (x >> 26 & mask);
	sum = sum + (x >> 27 & mask);
	sum = sum + (x >> 28 & mask);
	sum = sum + (x >> 29 & mask);
	sum = sum + (x >> 30 & mask);
	sum = sum + (x >> 31 & mask);
	return(sum);
}
