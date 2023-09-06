#include<stdio.h>
int main()
{
	char c;
	printf("enter e key to check if its vowel or consonant : ");
	scanf("%c",&c);
	if(c==97||c==101||c==105||c==111||c==117||c==65||c==69||c==73||c==79||c==85)
	{
		printf("the charecter %c is vowel",c);
	}
	else if ((c>=97&&c<=122) || (c>=65 && c<=90))
	{
		printf("the charecter %c is consonant",c);
	}
	else 
	{
		printf("%c is not an alphabet",c);
	}
}
