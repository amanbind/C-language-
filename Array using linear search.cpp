#include <stdio.h>
int main()
{
    int input[100], element, c, n;
    printf("Enter Number of Elements in Array :");
    scanf("%d", &element);
    printf("Enter %d numbers :", element);
    for(c = 0; c< element; c++)
	{
        scanf("%d", &input[c]);
    }
     printf("Enter a number to serach in Array :");
    scanf("%d", &n);
	for(c = 0; c< element; c++)
	{
        if(input[c] == n)
		{
            printf("Number %d found at index %d", n, c);
            break;
        }
    }
     if(c == element)
	{
     printf("Number %d Not Present in Input Array", n);
    }
    return 0;
}