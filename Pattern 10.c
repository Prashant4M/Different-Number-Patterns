#include<stdio.h>
void main()
{
	int rows,i,j,no=1;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			printf("%2d",no);
		}
		
		printf("\n");
	}
}
