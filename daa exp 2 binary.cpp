#include<stdio.h>
int main()
{
	int a[6],last=6-1,first=0,mid ,f=0,search;
	printf("enter : ");
	for(int i=0 ; i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search : ");
	scanf("%d",&search);
	while(first<last)
	{
		mid = ( last + first )/2;
		if(a[mid]==search)
		{
			f=1;
			printf("found at %d location ",mid);
			break;
		}
		else if(a[mid]<search)
		{
			first = mid +1;
		}
		else if(a[mid]>search )
		{
			last = mid -1;
		}
	}
	if(f==0)
	{
		printf("not found ");
	}
}
