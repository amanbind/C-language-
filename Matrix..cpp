#include<stdio.h>
int main()
{
    int i,j,m,n;
	int m1[100][100],m2[100][100],m3[100][100];
	for(i=0; i<m; i++) 
	{
		for(j=0; j<n; j++)
			printf("Enter the Element of the Matrix :");
		scanf("%d",&m1[i][j]);
	}
	for(i = 0; i <100; i++) 
	{
		for(j = 0; j < n; j++)
			printf("Enter the Element of Matrix :");
		scanf("%d",&m2[i][j]);
	}
	for(i = 0; i < m; i++) 
	{
		for(j = 0; j < n; j++) 
		{
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	for(i = 0; i < m; i++) 
	{
		for(j = 0; j < n; j++)
			printf("%d",m3[i][j]);
		printf("\n");
	}
}