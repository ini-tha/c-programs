#include <stdio.h>
int main()
{
    int i,j,k,n,c=80;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c/2-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        }
    return 0;
}
