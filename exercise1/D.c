#include<stdio.h>

int main(void) {
	char fh;
	char a[30];
	
	scanf("%s", a);
	
	switch (a[0])
	{
	case'P':
		fh = '+';
		break;
	case'S':
		fh = '-';
		break;
	case'M':
		fh = '*';
		break;
	case'D':
		fh = '/';
		break;
	case'A':
		fh = '&';
		break;
	case'O':
		fh = '|';
		break;
	case'E':
		fh = '^';
		break;
	}


	printf("#include<stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("	int a,b;\n");
	printf("	scanf(\"%%d%%d\",&a,&b);\n");
	printf("	printf(\"%%d\",a%cb);\n",fh);
	printf("	return 0;\n");
	printf("}");
	
	
	
	return 0;
}