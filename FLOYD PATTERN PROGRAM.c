#include<stdio.h>
int main()
{
	int i,j,row,a=1;
	printf("Enter the numbner of rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}
