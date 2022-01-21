#include<stdio.h>
#include<string.h>

int v(int);
char value(int);

int main(void) {
	int n,zyy;
	int i, j, k,count=1,count2=0,sum=0;
	char a[100],hyj;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%s", a);

		if (a[18] != '\0') {
			//如果身份证长度不为18
			count = 0;
			count2++;
			continue;
		}

		for (j = 0; j <= 16; j++) {
			//判断前17位
			sum = sum + v(j+1)*(a[j]-'0');
			if (('0' > a[j]) || (a[j] > '9')) {
				count = 0;
				break;
			}
		}

		if (!(((a[17] >= '0') && (a[17] <= '9')) || (a[17] == 'X')))
			//判断最后一位
			count = 0;

		if (count == 1) {
			zyy = sum % 11;
			hyj = value(zyy);
			if (hyj != a[17])
				count = 0;
		}

		if (count == 0) {
			printf("%s\n", a);
			count2++;
		}

		sum = 0;
		count = 1;

	}
	
	if (count2 ==0)
		printf("All passed");
	
	return 0;
}	

int v(int number) {
	switch (number) {
	case 1:return 7;
	case 2:return 9;
	case 3:return 10;
	case 4:return 5;
	case 5:return 8;
	case 6:return 4;
	case 7:return 2;
	case 8:return 1;	
	case 9:return 6;
	case 10:return 3;
	case 11:return 7;
	case 12:return 9;
	case 13:return 10;
	case 14:return 5;
	case 15:return 8;
	case 16:return 4;
	case 17:return 2;
	}
}

char value(int number) {
	switch (number) {
	case 0:return '1';
	case 1:return '0';
	case 2:return 'X';
	case 3:return '9';
	case 4:return '8';
	case 5:return '7';
	case 6:return '6';
	case 7:return '5';
	case 8:return '4';
	case 9:return '3';
	case 10:return '2';
	}
}