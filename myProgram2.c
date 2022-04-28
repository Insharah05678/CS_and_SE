#include <stdio.h>
void main()
{
    int num;
 
    printf("Input a Number :");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d Is a Positive Number \n", num);
    else
        printf("%d Is a Negative Number \n", num);
}
