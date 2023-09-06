#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i*2;j+=2)
        {
            printf("%d",j);
        }
        for(j=(i-1)*2;j>=2;j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}
