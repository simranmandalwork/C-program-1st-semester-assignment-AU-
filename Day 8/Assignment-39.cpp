#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	switch(age>=18)
{
	case 1:
	   printf("You are eligible to vote");
	   break;
	case 0:
	   printf("You are not eligible to vote");
	break;
}
	return 0;

}
