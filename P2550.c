#include<stdio.h>

int testn[7][1001],count=7,num,ans[7];//

int main(){

	scanf("%d",&num);
	//for(int i =1;i<7;i++){
	//scanf("%d",&seven[i]);}
	for(int i=0;i<=num;i++)
	{
	
		for(int j=0;j<7;j++)
		{
		
			scanf("%d",&testn[j][i]);
		}
	}

	for(int i=1;i<=num;i++){
	
		
		
		for(int j=0;j<7;j++){
		
		
			
			for(int k=0;k<7;k++){
			
				if(testn[j][i]==testn[k][0]){
			 // printf("\n%d\n`",testn[j][i]);	
					count--;
				}

			}
		}

		ans[count]++;
		count=7;  //reset
	}
	for(int i=0;i<7;i++){
	
		printf("%d ",ans[i]);
	}
	return 0;

}
