#include<stdio.h>
#include<string.h>
typedef long long LL;
int MAX(int a,int b){return a>b?a:b;}
int n,max,temp,a[22],b[22];

void dfs(int x){
	if (x==n+1){
		int i;
		for (i=1;i<temp;i++)
			if (b[i]<=b[i+1])
				return;
		max=MAX(max,temp);
		return;
	}
	dfs(x+1);
	b[++temp]=a[x];
	dfs(x+1);
	temp--;
}

int main(void){
	scanf("%d",&n);
	int i;
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	dfs(1);
	printf("%d",n-max);
	return 0;
}                                                                                                                                                                                               
