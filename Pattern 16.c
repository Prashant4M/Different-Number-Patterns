#include<stdio.h>
void main()
{
	int rows,i,j,space,no,no1;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		no=i;
		for(j=1;j<=rows-i+1;j++)
		{
			printf("%3d",no);
			no++;
		}
		no1=i-1;
		for(j=1;j<=i-1;j++)
		{
			printf("%3d",no1);
			no1--;
		}
		printf("\n");
	}
}
