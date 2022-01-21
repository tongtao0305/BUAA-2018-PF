#include<stdio.h>

int main(void) {
	int n,temp;


	
	scanf("%d",&n);
	
	if (n <= 12) {
		switch (n) {
		case 0:printf("tret"); break;
		case 1:printf("jan"); break;
		case 2:printf("feb"); break;
		case 3:printf("mar"); break;
		case 4:printf("apr"); break;
		case 5:printf("may"); break;
		case 6:printf("jun"); break;
		case 7:printf("jly"); break;
		case 8:printf("aug"); break;
		case 9:printf("sep"); break;
		case 10:printf("oct"); break;
		case 11:printf("nov"); break;
		case 12:printf("dec"); break;
		}
	}else if ((n > 12) && (n % 13 != 0)) {
		temp = n / 13;
		switch (temp) {
		case 1:printf("tam "); break;
		case 2:printf("hel "); break;
		case 3:printf("maa "); break;
		case 4:printf("huh "); break;
		case 5:printf("tou "); break;
		case 6:printf("kes "); break;
		case 7:printf("hei "); break;
		case 8:printf("elo "); break;
		case 9:printf("syy "); break;
		case 10:printf("lok "); break;
		case 11:printf("mer "); break;
		case 12:printf("jou "); break;
		}

		temp = n % 13;
		switch (temp) {
		case 1:printf("jan"); break;
		case 2:printf("feb"); break;
		case 3:printf("mar"); break;
		case 4:printf("apr"); break;
		case 5:printf("may"); break;
		case 6:printf("jun"); break;
		case 7:printf("jly"); break;
		case 8:printf("aug"); break;
		case 9:printf("sep"); break;
		case 10:printf("oct"); break;
		case 11:printf("nov"); break;
		case 12:printf("dec"); break;
		}
	}
	else if ((n > 12) && (n % 13 == 0)) {
		temp = n / 13;
		switch (temp) {
		case 1:printf("tam"); break;
		case 2:printf("hel"); break;
		case 3:printf("maa"); break;
		case 4:printf("huh"); break;
		case 5:printf("tou"); break;
		case 6:printf("kes"); break;
		case 7:printf("hei"); break;
		case 8:printf("elo"); break;
		case 9:printf("syy"); break;
		case 10:printf("lok"); break;
		case 11:printf("mer"); break;
		case 12:printf("jou"); break;
		}
	}
	
	return 0;
}