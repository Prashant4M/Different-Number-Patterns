#include<stdio.h>
void main()
{
	int rows,i,j,space,no;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{   
	    no=i;
		for(space=1;space<=rows-i;space++)
		{
			printf("%2d",no);
			no++;
		}
		for(j=rows;j>rows-i;j--)
		{
			printf("%2d",rows);
		}
		printf("\n");
	}
}
