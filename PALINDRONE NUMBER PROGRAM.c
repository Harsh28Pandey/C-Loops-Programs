#include<stdio.h>
int main()
{
	int i,rev=0;
	printf("Enter the number of rows:");
	scanf("%d",&i);
	for(i=1;i<0;i++)
	{
		rev=(rev*10)+i%10;
		i=i/10;
			printf("Reverse number=%d\n",i);
	}
//	if(rev==i)
//	{
//		printf("It is a palindrone number %d",rev);
//	}
//	else
//	{
//		printf("It is not a palindrone number %d",rev);
//	}
	return 0;
}
