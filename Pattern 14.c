#include<stdio.h>
void main()
{
	int rows,i,j,no,cols;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	printf("Enter the number of coloumns::");
	scanf("%d",&cols);
	for(i=1;i<=rows;i++)
	{    
		for(j=cols;j>cols-i;j--)
		{
			printf("%2d",j);
		}
		for(j=1;j<=cols-i;j++)
		{
			printf("%2d",rows-i+1);
		}
		printf("\n");
	}
}
