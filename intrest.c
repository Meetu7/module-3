#include<stdio.h>
int main(){

    float principle,rate,time,SI;

    printf("Enter principle(amount) :");
    scanf("%f",&principle);

    printf("Enter time :");
    scanf("%f",&time);

    printf("Enter rate :");
    scanf("%f",&rate);

    SI = (principle*time*rate) / 100;

    printf("Simple Intrest = %f",SI);
    
    return 0;
}