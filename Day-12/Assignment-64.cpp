#include<stdio.h>
#include<string.h>
struct book
{
	char bookname[50];
	int bookid;
	float bookprice;
};
int main()
{
	struct book books[10];
	int i;
	printf("Enter details of 10 books:\n");
	for(i=0;i<10;i++)
{	printf("\nBook %d\n",i+1);
	printf("Enter Book ID: ");
    scanf("%d",&books[i].bookid);
    printf("Enter Book Name: ");
    scanf(" %s",books[i].bookname);
    printf("Enter Book Price: ");
    scanf("%f",&books[i].bookprice);
}
printf("\n--- Book Details Entered ---\n");
    for(i=0;i<10;i++)
     {
	    printf("\nBook %d:\n",i+1);
        printf("ID:%d\n",books[i].bookid);
        printf("Name:%s\n",books[i].bookname);
        printf("Price:%.2f\n",books[i].bookprice);
    }
    return 0;
}
