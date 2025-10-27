#include<stdio.h>
int main()
{
    int totalcookies,cookiesperbox,boxespercontainer,totalboxes,totalcontainers,remainingcookies,remainingboxes;
    printf("Enter the total number of cookies: ");
    scanf("%d", &totalcookies);
    printf("Enter the number of cookies in each box: ");
    scanf("%d", &cookiesperbox);
    printf("Enter the number of boxes in each container: ");
    scanf("%d", &boxespercontainer);
    totalboxes=totalcookies/cookiesperbox;
    remainingcookies=totalcookies%cookiesperbox;
    totalcontainers=totalboxes/boxespercontainer;
    remainingboxes=totalboxes%boxespercontainer;
    printf("\nNumber of boxes needed: %d", totalboxes);
    printf("\nNumber of containers needed: %d", totalcontainers);
    printf("\nRemaining cookies (not in a box): %d", remainingcookies);
    printf("\nRemaining boxes (not in a container): %d\n", remainingboxes);
    return 0;
}

