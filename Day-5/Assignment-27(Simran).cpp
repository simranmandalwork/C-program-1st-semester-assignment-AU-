#include<stdio.h>
int main()
{
	char n;
	printf("Enter a character:");
	scanf("%c",&n);
	switch(n)
	{
	case 'a||A':
    printf("%c is a vowel",n);
    break;
    case 'e||E':
    printf("%c is a vowel",n);
    break;
    case 'i||I':
    printf("%c is a vowel",n);
    break;
    case 'O||o':
    printf("%c is a vowel",n);
    break;
    case 'u||U':
    printf("%c is a vowel",n);
    break;
    default:
    printf("\n %c is consonant",n);
	}
	return 0;
}
