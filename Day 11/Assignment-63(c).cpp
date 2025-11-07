#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,b=0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            b=1;
            break;
        }
    }
    if(b==0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
    return 0;
}
