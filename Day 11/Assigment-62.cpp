#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,a,b=0;
    printf("Enter a string: ");
    scanf("%s",str);
    a=strlen(str);
    j=a-1;
    for(i=0;i<j;i++)
    {
        if(str[i]!=str[j])
        {
        b=1;
        break;
        }
        j--;
    }
    if(b==0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}

