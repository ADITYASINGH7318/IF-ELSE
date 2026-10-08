#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    // By Using Ternary Oprator
    // Exp1 ? Exp2 : Exp3
    n%2==0 ? printf("Even") : printf("Odd");
    // if (n%2==0)
    // {
    //     printf("Even");
    // }
    // else
    //      printf("Odd");


    return 0;
}