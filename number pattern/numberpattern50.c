#include<stdio.h>
int main()
{
    int i,j,diff,value,N;
    printf("Enter rows: ");
    scanf("%d", &N);

    diff = 1;
    value = 1;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            value += diff;
            diff++;  
        }
        printf("\n");
	}
}

