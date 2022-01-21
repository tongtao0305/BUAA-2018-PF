#include<stdio.h>
#include<string.h>

int main(void) {
	int i=0,count=0;
	char a[101];

	scanf("%s", a);
	
	while (a[i]!=EOF) {
		if ((a[i] == '1') && (a[i + 1] == '5') && (a[i + 2] == '8')) {
			count = 1;
			printf("%d 158!158!158!", strlen(a)-i-2);
			break;
		}
		i++;
	}
	if (count == 0) {
		printf("We can't find the qun pet.");
	}
	
	return 0;
}