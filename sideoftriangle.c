#include <stdio.h>
int main()
{
    int a;

    printf("Enter the 1st side:");
    scanf("%d", &a);
    int b;
    printf("Enter the 2st side:");
    scanf("%d", &b);
    int c;
    printf("Enter the 3st side:");
    scanf("%d", &b);

    if ((b + c )> a && (a + c )> b && (a + b > c))
        printf("VALIDE");
    else
        printf("INVALIDE");

    return 0;
}