// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the Number:");
//   scanf("%d",  &n);

//   if(n%5==0 && n%3==0)
//   printf("Yes, It is divisible by 5 and 3.");

//   else
//   printf("Not, It is no divisible by 5 and 3.");

//     return 0;
// }

// Divisible by the atleast one Number........

#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d", &n);
  if (n % 5 == 0 || n % 3 == 0)

    printf("The number is divisible by 5 and 3.");
  else
    printf("The is not divisible by 5 and 3.");

  return 0;
}
