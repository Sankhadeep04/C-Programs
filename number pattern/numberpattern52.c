#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i<=(n/2))
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", (n-i+1));
            }
        }
        printf("\n");
    }

}

