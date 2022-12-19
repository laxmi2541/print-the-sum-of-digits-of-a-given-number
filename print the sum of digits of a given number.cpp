#include<stdio.h>
int main()
{
	int a,sum=0,n;
	printf("Enter a number");
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("sum of digits of number %d is %d,a,sum");
	return 0;
	}


