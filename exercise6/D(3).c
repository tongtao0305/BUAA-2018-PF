#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char temp[10002];
int main(void) {
	int i = 0,count = 0, sum = 0;
	int if_fh,fh=0,dc=1;

	while (gets(temp) != NULL){
		dc = 1;
		temp[strlen(temp) - 1] = '\0';
		for (i = 0; temp[i] != '\0'; i++) {
			if_fh = (temp[i] == ',') + (temp[i] == '.') + (temp[i] == '!') + (temp[i] == '?') + (temp[i] == ';') + (temp[i] == ' ');
			if (if_fh) {
				fh = 0;
				dc = 1;
			}
			else{
				if (temp[i]!='\t') {
					count = count + dc;
					dc = 0;
				}
			}
		}
	}

	printf("%d\n", count);
	return 0;
}

