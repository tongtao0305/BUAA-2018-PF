#include<stdio.h>

int hd[105][105];
int check[105][105];

int main(void){
	int t,n,m,i,j,k,x1,x2,y1,y2;
	char s[100];
	
	scanf("%d",&t);//读取数据组数 
	
	while(t--){
		scanf("%d %d",&n,&m);
		
		for (i=1;i<=n;i++){
			for (j=1;j<=n;j++){
				check[i][j]=0;
			}
		}
		
		
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				scanf("%d",&hd[i][j]);
		
		while(m--){
			scanf("%s %d %d %d %d",s,&x1,&y1,&x2,&y2);
			
			//如果为 getH 
			if (strcmp(s,"getH")==1){
				for (i=x1;i<=x2;i++){
					for (j=y1;j<=y2;j++){
						if (check[i][j]==0){
							check[i][j]=1;
							hd[i][j]=(hd[i][j]*hd[i][j]+233)%1773;						
						}
					}
				}
			}
			
			//如果为 normalize
			if (strcmp(s,"normalize")==1){
				for (i=x1;i<=x2;i++){
					for (j=y1;j<=y2;j++){
						//如果已经计算过灰度 
						if (check[i][j]==1){
							if (hd[i][j]!=0)
								hd[i][j]=1;		
							else
								hd[i][j]=0;				
						}
					}
				}
			}
			
			//如果为 display
			if (strcmp(s,"display")==1){
				for (i=x1;i<=x2;i++){
					for (j=y1;j<=y2;j++){
						printf("#%6X  ",hd[i][j]);
					}
					printf("\n");
				}
			}
			
		}
		
	}

	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			printf("%04d  ",hd[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
