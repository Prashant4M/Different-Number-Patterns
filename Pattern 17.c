#include<stdio.h>
void main()
{
	int rows,i,j,space,no,no1;
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{   
	    no=rows-i+1;
		for(space=1;space<=rows-i;space++)
		{
				printf("%2d",no);
				no--;
		}	
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		printf("\n");
	}	
	
	
}
