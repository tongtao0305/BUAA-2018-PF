#include<stdio.h>
#include<string.h>
int main(void) {
	int n;
	char a[5001];
	char b[5001];
	scanf("%d", &n);

	while (n--) {
		scanf("%s", a);
		scanf("%s", b);
		if (strcmp(a, b) == 0)
			printf("EQUAL\n");
		else if(strcmp(a, b) > 0)
			printf("A\n");
		else
			printf("B\n");
	}
	return 0;
}