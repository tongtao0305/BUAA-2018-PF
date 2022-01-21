#include<stdio.h>

int main(void){
	int n,m,i,j,k,count=0,checka=0,checkb=0;
	int a[100005],b[100005];
	
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	while(checka<n&&checkb<m){
		//如果a中有数字跟b中的数字相对应 
		if(a[checka]==b[checkb]){
			count++;
			checkb++;
		}
		checka++;
	}
	
	if (count==m)
		printf("TAK");
	else
		printf("NIE");
	
	return 0;
}
