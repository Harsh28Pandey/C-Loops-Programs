#include<stdio.h>
int main()
{
	int n,i,fac;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fac=fac*i;
	}
	printf("Factorial of number=%d",fac);
	return 0;
}
