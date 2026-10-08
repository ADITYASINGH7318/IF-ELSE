#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the 1st Number:");
    scanf("%d", &a);
    printf("Enter the 2st Number:");
    scanf("%d", &b);
    printf("Enter the 3st Number:");
    scanf("%d", &b);

    if (a > b && a > c)
        printf("The greatest number is a");
    if (b > a && b > c)
        printf("The greatest number is a");
    if (c > b && c > a)
        printf("The greatest number is a");

    return 0;
}