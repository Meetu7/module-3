/*Wap to swap two numbers without using third variable*/
#include<stdio.h>
int main()
{
    int a=10,b=20;


    printf("\nBefore swap a=%d,b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swap a=%d,b=%d",a,b);
    return 0;
}
