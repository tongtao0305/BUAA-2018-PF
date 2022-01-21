#include<stdio.h>
#include<string.h>
int main(void) {
	char a[100], b[100], c[100];
	char temp[100];

	while (gets(temp) != NULL) {
		switch (temp[0]) {
		case 'p':printf("scissors\n"); break;
		case 'r':printf("paper\n"); break;
		case 's':printf("rock\n"); break;
		}
	}
	
	return 0;
}