#include<stdio.h>
int PrimeInRange(int,int);
int main()
{
	int n,m;
	printf("Enter the starting and ending point:");
	scanf("%d%d",&n,&m);
	PrimeInRange(n,m);
	
}
int PrimeInRange(int n,int m)
{
	int i,j,flag,pr;
    for(i=n;i<=m;i++)
    {
        flag=1; 
        for(j=n;j<=m/2;j++)
        {
          
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d,",i);
        }
    }
}
