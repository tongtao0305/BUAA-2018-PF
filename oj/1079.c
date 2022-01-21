#include<stdio.h>
void f(int);
int n,k,cnt,num[10], count[10];
int main(void) {
	int t,i;
	scanf("%d",&t);
	while(t--){
		cnt=0;
		for (i=1;i<10;i++){
			num[i]=0;
			count[i]=0;
		}
		scanf("%d %d", &n, &k);
		f(n);	
	}
	return 0;
}

void f(int left) {
	int i;

	if (left == 0) {
		cnt++;
		if (cnt==k){
			for (i = 1; i <= n; i++)
				printf("%d ", num[i]);
			printf("\n");	
		}
		return;
	}

	for (i = n; i >=1 ; i--) {
		if (count[i] != 0||n-left+1==i)
			continue;
		num[n - left + 1] = i;
		count[i] = 1;
		f(left - 1);
		count[i] = 0;
	}
	return;
}
