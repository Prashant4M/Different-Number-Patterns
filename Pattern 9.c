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
			if(i==1&&j==1||i==1&&j==rows||i==rows&&j==1||i==j||j==rows-i+1)
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
