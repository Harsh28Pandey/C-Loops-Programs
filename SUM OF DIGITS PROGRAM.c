//find sum of digits
#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("Enter the number:");
	scanf("%d",&i);
	while(i>=1){
		sum=sum+i%10;
		i=i/10;
	}
	printf("Sum of digits=%d",sum);
	return 0;
}
