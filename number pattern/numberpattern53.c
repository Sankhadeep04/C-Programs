#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        printf("%d\n",num);
        num = num/10;
    }

}
