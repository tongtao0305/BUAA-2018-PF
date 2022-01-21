#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)//这个比较函数的格式是qsort规定的
{
	return *(int *)a > *(int *)b ? -1 : 1;//强制转换成int指针类型，然后解指针
}

int main(void) {
	int n,x,sum=0,count=0;
	int i, j, k;
	int *a;
	scanf("%d %d", &n, &x);
	
	a = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), cmp);	//待排序的元素首地址，待排序的元素个数，待排序的元素大小，比较函数
	
	for (i = 0; i <= n - 1; i++) {
		if ((i + 1) % (x+1) == 1) {
			sum = sum + a[i];
			count++;
		}
	}
	if ((n%(x+1)==1))
		printf("%d %d", sum, n-count+1);//如果一轮之后刚好还剩一根就给伙伴吃，此时时间要加1
	else
		printf("%d %d", sum, n - count);//其余情况，酸奶吃的根数就是时间
	return 0;
}