#include<stdio.h>
void main()
{
	int rows,i,j,no=0,no1=1;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i==rows/2+1 && j==rows/2+1)
			{
				printf("%2d",no);
			}
			else
			{
				printf("%2d",no1);
			}
				
		}
		printf("\n");
	}
}
