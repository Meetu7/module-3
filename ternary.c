/*find number is even or odd using ternary operator*/
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the numbers:: \n");
    scanf("%d",&n);

    (n % 2 == 0) ? (printf("%d is even numbers \n",n)) : (printf("%d is odd numbers \n",n));

    return 0;
}