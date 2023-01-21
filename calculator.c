#include<stdio.h>
int main(){

    int a=10,b=5;
    
    printf("\nsum:: %d",(a+b));
    printf("\nsub:: %d",(a-b));
    printf("\nmul:: %d",(a*b));
    float c=(float)a/b;
    printf("\ndiv:: %f",c);
    printf("\nrem:: %d",(a%b));
    
    return 0;
}