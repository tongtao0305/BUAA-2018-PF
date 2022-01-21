#include<stdio.h>
#include<math.h>

int main(void) {
	int x,n,m,a,b,count=0,temp=0;
	long long int i;
	scanf("%d", &x);
	
	if (x == 1) {
		scanf("%d %d", &n, &m); 
		m = pow(2, m - 1); 
		n |= m;
		printf("%d", n);
	}
	else if (x == 2) {
		scanf("%d", &n);
		if (n == 0) n = 3;
		while (n > 1) 
		{ 
			if (n % 2 == 1)
			{
				printf("No");
				break;
			}
			n /= 2;
		} 
		if (n == 1) printf("Yes");
	}
	else if(x==3){
		scanf("%d %d", &a, &b);
		printf("%d %d", b, a);
	}
	else if (x == 4) {
		scanf("%d", &n);
		if (n%2==0)
			printf("Yes");
		else
			printf("No");
	}
	else if (x == 5) {
		scanf("%d %d", &n, &m); 
		n >>= (m - 1); 
		printf("%d", n % 2);
	}
	else {
		printf("158!158!158!");
	}
	
	return 0;
}

