#include <stdio.h>

int main()
{
    int i, n,sum=0;
  
    
    printf("all even numbers ::");
    scanf("%d",&n);

    printf("Even numbers from 1 to %d are: \n", n);

    for(i=2; i<=n; i+=2)  
    {
        sum += i;
    }

    printf("Sum of all even numbers from 1 to %d: %d", n, sum); 

    return 0;
}