#include <stdio.h>

int main()
{
    int i, j, end, flag;

    printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    for(i=2; i<=end; i++)
    {
        flag = 1; 

        for(j=2; j<end/2; j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }

        if(flag==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
