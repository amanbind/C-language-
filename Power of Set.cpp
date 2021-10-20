#include<stdio.h>
#include<math.h>
int powerofset(char*set,int size) 
{
	int power_set = pow(2,size);
	int counter,j;
	for(counter=0; counter<power_set; counter++) 
	{
		for(j=0; j<size;j++) 
		{
			if(counter&(1<<j))
				printf("%c",set[j]);
		}
		printf("\n");
	}
}
int main() 
{
	char set[]= {'a','b','c',};
	powerofset(set,3);
	getchar();
	return 0;
}