#include<stdio.h>
int main()
{
	int a[4],x,f=0;
	printf("enter the elements : ");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched : ");
	scanf("%d",&x);
	for(int i=0;i<4;i++)
	{
		if(a[i]==x)
		{
			f=1;
			printf("element isfound at %d index",i);
			break;
		}
    }
    if(f==0)
    printf("element is not found");
}
