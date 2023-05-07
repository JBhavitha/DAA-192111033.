#include<stdio.h>
int main()
{
	int i,j,a[10][10],b[10][10],mul[10][10],m1,m2,m3,m4,m5,m6,m7,r,c;
	printf("enter number of rows");
	scanf("%d",&r);
	printf("enter number of columns");
	scanf("%d",&c);
	printf("enter the first matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
m1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
m2=(a[1][0]+a[1][1])*b[0][0];
m3=a[0][0]*(b[0][1]-b[1][1]);
m4=a[1][1]*(b[1][0]-b[0][0]);
m5=(a[0][0]+a[0][1])*b[1][1];
m6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
m7=(a[0][1]-a[1][1])*(b[0][1]+b[1][1]);
mul[0][0]=m1+m4-m5+m7;
mul[0][1]=m3+m5;
mul[1][0]=m2+m4;
mul[1][1]=m1+m3-m2+m6;
printf("after strassen mul");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",mul[i][j]);
	}}
return 0 ;
}
