#include<stdio.h>

void move(int n, int from, int to);
void hanoi(int n, int from, int via, int to);

int main(void) {
	int n;

	while (scanf("%d", &n) == 1) {
		hanoi(n, 'A', 'B', 'C');
		printf("\n");
	}

	return 0;
}

void move(int n, int from, int to) {
	printf("%c --> %c\n", from, to);
}

void hanoi(int n, int from, int via, int to) {
	if (n == 1) {
		move(n, from, to);
		return;
	}
	hanoi(n - 1, from, to, via);
	move(n, from, to);
	hanoi(n - 1, via, from, to);
}