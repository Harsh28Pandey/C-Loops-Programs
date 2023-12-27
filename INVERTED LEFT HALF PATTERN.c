#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=0;j<=2*(row-i)-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
