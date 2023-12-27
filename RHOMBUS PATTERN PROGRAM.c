#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=row-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=row;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
