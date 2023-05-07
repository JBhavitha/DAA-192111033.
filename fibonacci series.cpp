#include<stdio.h>
int main()
{
	int num ,n1=0,n2=1,n3,i;
	printf("enter the num : ");
	scanf("%d",&num);
	printf("%d %d\n\n",n1,n2);
	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
return 0;
}
