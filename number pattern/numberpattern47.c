#include <stdio.h>

int main()
{
    int i,j,n;

    printf("Enter number ofrows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(j=i*2; j<n*2; j++)
        {
            printf(" ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
