#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("enter the num : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact =fact*i;
	}
	printf("the number is : %d",fact);
return 0;
}
