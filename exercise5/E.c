#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char p[101], q[101];
	int i, j, k,temp,count=0;

	for (i = 0; i <= 100; i++)
		p[i] = ' ';
	for (i = 0; i <= 100; i++)
		q[i] = ' ';
	
	gets(p);
	gets(q);

	for (i = 0; i <= 100; i++) {
		for (j = i + 1; j <= 100; j++) {
			if (p[j] < p[i]) {
				temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}

	for (i = 0; i <= 100; i++) {
		for (j = i + 1; j <= 100; j++) {
			if (q[j] < q[i]) {
				temp = q[j];
				q[j] = q[i];
				q[i] = temp;
			}
		}
	}
	
	for (i = 0; i <= 100; i++) {
		if (q[i] != p[i]) {
			count = 1;
			break;
		}
	}
	
	if (count == 0)
		printf("TAK");
	else
		printf("NIE");
	
	return 0;
}