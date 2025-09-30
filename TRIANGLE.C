#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,row;
	clrscr();
	printf("\n Enter Row:-");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
	for(k=1;k<=row-i;k++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf(" * ");
	}
	printf("\n\n");
	}
	getch();
}