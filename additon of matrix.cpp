#include <stdio.h>
int main() 
{
	int m,n;
	printf("Enter Number of rows and columns :");
    scanf("%d %d",&m,&n);
	int i, j;
	int m1[m][n],m2[m][n],m3[m][n];
	printf("Enter the Elements of Matrix 1 :");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&m1[i][j]);
	}
	printf("Enter the Elements of Matrix 2 :");
	for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++)
			scanf("%d",&m2[i][j]);
	}
    for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++) 
		{
			m3[i][j]=m1[i][j]*m2[i][j];
		}
	}
    for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++)
			printf( "%d" , m3[i][j]);
	    printf(" \n ");
	}
	return 0;
}