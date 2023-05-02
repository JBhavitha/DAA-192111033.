#include<stdio.h> 
int main()
{
	int a[10],i,j,y,temp;
	printf("enter : ");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4-1;i++)
	{
		for(j=0;j<4-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for( y=0 ; y<4;y++)
	{
		printf("%d",a[y]);
	}
return 0;
}
