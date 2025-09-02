#include<stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    if(c=='A'||c=='a')
	{
    printf("\n%c is a Vowel.",c);
    }
    else if(c=='E'||c=='e')
	{
    printf("\n%c is a Vowel.",c);
    }
    else if(c=='I'||c=='i')
	{
	printf("\n%c is a Vowel.",c);
    }
    else if(c=='O'||c=='o')
	{
    printf("\n%c is a Vowel.",c);
    }
    else if(c=='U'||c=='u')
	{
    printf("\n%c is a Vowel.",c);
    }
    else
	{
    printf("\n%c is a Consonant.",c);
    }
    return 0;
}
