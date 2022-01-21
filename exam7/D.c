#include<stdio.h>
#include<string.h>

void rev(char *, int ,int);

int main() {
	char str[1000], *p;
	int n,l,r;

	fgets(str, 1000, stdin);
	scanf("%d", &n);

	while (n--) {
		scanf("%d %d", &l, &r);
		rev(str, l, r);
	}

	puts(str);
	return 0;
}void rev(char* first, int l,int r) {
	int tmp;
	while (l<r) {
		tmp = first[l];
		first[l] = first[r];
		first[r] = tmp;
		l++, r--;
	}
}