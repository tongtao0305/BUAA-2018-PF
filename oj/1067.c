#include<stdio.h>
#include<string.h>
int main(void){
	int n,i,j,k;
	int op1=0,op2=0;
	long long int number1=0,number2=0,number3=0,result=0;
	char string[20];
	
	scanf("%d",&n);
	
	while(n--){
		scanf("%s",string);
		for (i=0;i<strlen(string);i++){
			if (string[i]=='*'||string[i]=='+'){
				if (op1==0){
					op1=i;
				}
				else{
					op2=i;
					break;
				}
			}
		}
		
		for (i=0;i<op1;i++){
			number1=number1*10+string[i]-'0';
		}			
		for (i=op1+1;i<op2;i++){
			number2=number2*10+string[i]-'0';
		}
		for (i=op2+1;i<strlen(string);i++){
			number3=number3*10+string[i]-'0';
		}
		
		//printf("%d %d %d %d %d\n",op1,op2,number1,number2,number3);
		
		if (string[op1]=='+'&&string[op2]=='+')
			result=number1+number2+number3;
		else if (string[op1]=='*'&&string[op2]=='*')
			result=number1*number2*number3;
		else if (string[op1]=='+'&&string[op2]=='*')
			result=number1+number2*number3;
		else if (string[op1]=='*'&&string[op2]=='+')
			result=number1*number2+number3;
		
		printf("%lld\n",result);
		number1=0;
		number2=0;
		number3=0;
		result=0;
		op1=0;op2=0;
	}
	
	return 0;
} 
