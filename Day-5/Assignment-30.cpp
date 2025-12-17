#include<stdio.h>
int main()
{
   int m,e,l,a,c,avg;
   printf("Enter math mark:");
   scanf("%d",&m);
   printf("Enter english mark:");
   scanf("%d",&e);
   printf("Enter life science mark:");
   scanf("%d",&l);
   printf("Enter applied science mark:");
   scanf("%d",&a);
   printf("Enter computer science mark:");
   scanf("%d",&c);
   avg=(m+e+l+a+c)/5;
   if(avg>=90)
   {
   printf("\n Grate:'o'");
}
else if(avg>=79)
{
	printf("\n grade:'A+'");
}
else if(avg>=69)
{
	printf("\n grade:'A'");
	
}
else if(avg>=59)
{
	printf("\n grade:'B+'");
}
else if(avg>=49)
{
	printf("\n grade:'B'");
}
else if(avg>=39)
{
	printf("\n grade:'C'");
}
else
{
	printf("\n Fail'");
}
   return 0;
}

