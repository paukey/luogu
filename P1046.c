#include <stdio.h>

int apple[11],maxhigh,high,count;


int main(){

	for(int i =1;i<=10;i++)
		scanf("%d",&apple[i]);
	scanf("%d",&high);
	
	maxhigh=high+30;
	for(int i=1;i<=10;i++)
		if(apple[i]<=maxhigh)
			count++;

	printf("%d",count);

	return 0;


}
