#include<stdio.h>
int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for(int k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}
