#include<stdio.h>
int main()
{
    int a[69], i,j,n,swap;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter %d Elements :",n);
    for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for(i = 0 ; i < n-1 ;i++)
    {
        for ( j = 0; j < n-i ; j++) ;
    }
    {
        if (a[j]> a[j+1])
        {
            swap = a[j];
            a[j] = a[j+1];
            a[j+1] = swap ;
        }
        
    }
    printf("The sorted list is \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
return 0;
}