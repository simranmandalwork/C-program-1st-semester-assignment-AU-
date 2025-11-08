#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
    l++;
    }
    printf("Length of the string = %d\n",l);
    return 0;
}

