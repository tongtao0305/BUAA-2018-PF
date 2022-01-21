#include<stdio.h>

int max(int a,int b){
	return a>b?a:b;
}
int min(int a,int b){
	return a>b?b:a;
}

int main(void){
	int hp1,hp2,plus;
	int HPmax,attack,healing;
	int enemyHPmax,enemyAttack;
	int count=0,result=1;
	
	scanf("%d %d %d",&HPmax,&attack,&healing);
	scanf("%d %d",&enemyHPmax,&enemyAttack);
	
	hp1=HPmax;
	hp2=enemyHPmax;
	
	while(hp1>0&&hp2>0){	
			
		hp1=hp1-enemyAttack;
		count++;

		if (hp1<=0){
			result=1;
			break;
		}		
		
		count++;		
		if (hp1+healing<=enemyAttack){
			//touxiang
			result=3;
			break;
		}
		 
		if (hp1>enemyAttack){
			hp2=hp2-attack;//gongji
		}
		else{
			plus=min(healing,HPmax-hp1);
			if (plus==enemyAttack){
				result=3;
				break;
			}
			hp1=hp1+plus;
		}
		
		if (hp2<=0){
			result=2;
			break;
		}
	}
	
	switch(result){
		case 1:printf("I died in round %d",count);break;
		case 2:printf("Enemy died in round %d",count);break;
		case 3:printf("I print GG in round %d",count);break;		
	}
	
	return 0;
}
