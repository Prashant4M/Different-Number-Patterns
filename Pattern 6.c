#include<stdio.h>
void main()
{
	int rows,i,j,no=1,no1=0;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i%2==0&&j%2!=0||i%2!=0&&j%2==0)
			{
				printf("%2d",no1);
			}
			else
			{
				printf("%2d",no);
			}
		}
		printf("\n");
	}
}
