/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/
#include <stdio.h>
#include<math.h>
int main()
{
    int n, sum = 0, a, b, digit;
    printf("Enter number to find sum of a and b digit = ");
    scanf("%d", &n);

    b = n % 10;

    digit = (int)log10(n);
    a = (int)(n / pow(10, digit));

    sum = a + b;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}