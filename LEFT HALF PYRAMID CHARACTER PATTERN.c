#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=2*(row-i)-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%c ",'A'+k);
		}
		printf("\n");
	}
	return 0;
}
