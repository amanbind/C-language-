#include <stdio.h>
#include<conio.h>
int main() 
{
    int num, o, rem, result = 0;
    printf("Enter a Number : ");
    scanf("%d", &num);
    o = num;
    while (o != 0) 
    {
         rem = o % 10;
        result += rem * rem * rem;
        o /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}