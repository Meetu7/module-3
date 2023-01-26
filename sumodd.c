#include <stdio.h>

int main()
{
    int i, n,sum=0;
  
    
    printf("all odd numbers ::");
    scanf("%d",&n);

    printf("Even numbers from 1 to %d are: \n", n);

    for(i=1; i<=n; i+=2)  
    {
        sum += i;
    }

    printf("Sum of all odd numbers from 1 to %d: %d", n, sum); 

    return 0;
}