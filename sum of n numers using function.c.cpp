#include<stdio.h>
int addition(int);
main()
{
	int n, i, sum=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("the sum of %d numbers is %d",n,sum);
}
int addition(int n)
{
	return 0;
}
