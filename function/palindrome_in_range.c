#include<stdio.h>
int PalindromeInRange(int,int);
int main()
{
	int start,end;
	printf("Enter the starting range:");
	scanf("%d",&start);
	printf("enter the ending range :");
	scanf("%d",&enc);
	PalindromeInRange(start,end);
}
int PalindromeInRange(int start,int end)
{
	int num, rem, reverse_num, temp;
	for(num=start;num<=end;num++){
    temp=num;
    reverse_num=0;
    while(temp)
	{
        rem=temp%10;
        temp=temp/10;
        reverse_num=reverse_num*10+rem;
    }
    if(num==reverse_num)
	{
		printf("palindrome numbers in range are :%d\n",num);
	}
        
   }
   return 0;

}
