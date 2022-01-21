#include<stdio.h> 

void solve(int n, char a, char b, char c)
{
	if(n == 1){
		printf("%c -> %c\n", a, b);
		printf("%c -> %c\n", b, c);
		return;
	}
	solve(n - 1, a, b, c);
	printf("%c -> %c\n", a, b);
	solve(n - 1, c, b, a);
	printf("%c -> %c\n", b, c);
	solve(n - 1, a, b, c);
}

int main()
{
	int test;
	scanf("%d", &test);
	while(test --){
		int n;
	scanf("%d", &n);
	solve(n, 'A', 'B', 'C');
	printf("\n");
	}
	return 0;
}
