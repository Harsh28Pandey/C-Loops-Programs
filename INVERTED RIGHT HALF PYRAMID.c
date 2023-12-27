//write a program to print the star reverse pattern program
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the rows:");
	scanf("%d",&n);
	//using the for loop then the conditiond are satisfied 
	//for(intilization;condition;updation){
	//loop body/blocks of statements}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
