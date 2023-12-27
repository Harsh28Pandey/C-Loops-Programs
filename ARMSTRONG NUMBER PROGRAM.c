//find the number is a armstrong number
#include<stdio.h>
int main()
{
	int i,x,sum=0;
	printf("Enter the number to find armstrong number:");
	scanf("%d",&i);
	x=i;
	
	while(i>0){
		sum=sum+(i%10)*(i%10)*(i%10);
		i=i/10;
	}
	if(sum==x){
		printf("Armstrong number %d",sum);
	}
	else{
		printf("Not a armstrong number %d",sum);
	}
	return 0;
}
