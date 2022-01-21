#include <stdio.h>
#include <string.h>
int main(void){
	int n,len_a;
	char buf[1000],a[1000],b[1000], *p,*x;

	scanf("%s%s%s", buf, a, b);
	len_a = strlen(a);
	p = buf;

	while (p != NULL) {
		x = strstr(p, a); 		

		if (x == NULL) {
			printf("%s",p);
			break;
		}
		while (p < x) {
			putchar(*p);
			p++;
		}
		printf("%s", b);
		p += len_a;
	}
	return 0;
}


