#include<stdio.h>

void hanoi(int,char,char,char);

int main(void){
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}

void hanoi(int n,char from,char via,char to){
	if (n==1)
		printf("%c -> %c\n",from,to);
	else{
		hanoi(n-1,from,to,via);
		printf("%c -> %c\n",from,to);
		hanoi(n-1,via,from,to);
	}
}
