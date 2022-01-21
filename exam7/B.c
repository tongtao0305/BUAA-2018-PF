#include<stdio.h>
#include<string.h>
int main(void) {
	char name[4][25];
	int p[3], q[3];
	int max_p=0, max_q=0,max_pq=0;
	int i, j, k,temp;
	
	scanf("%s%d%d", name[0], &p[0], &q[0]);
	scanf("%s%d%d", name[1], &p[1], &q[1]);
	scanf("%s%d%d", name[2], &p[2], &q[2]);
	
	for (i = 1; i < 3; i++) {
		for (j = 2; j >= i; j--) {
			if (strcmp(name[j - 1], name[j]) > 0) {
				strcpy(name[3], name[j - 1]);
				strcpy(name[j - 1], name[j]);
				strcpy(name[j], name[3]);
				
				temp = p[j - 1]; 
				p[j - 1] = p[j];
				p[j] = temp;
				
				temp = q[j - 1];
				q[j - 1] = q[j];
				q[j] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++) {
		if (p[i] > max_p)
			max_p = p[i];
		if (q[i] > max_q)
			max_q = q[i];
		if (q[i]+p[i] > max_pq)
			max_pq = q[i]+p[i];
	}

	for (i = 0; i < 3; i++) {
		if (p[i] == max_p)
			printf("%s ", name[i]);
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		if (q[i] == max_q)
			printf("%s ", name[i]);
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		if (p[i]+q[i] == max_pq)
			printf("%s ", name[i]);
	}

	return 0;
}