#include<stdio.h>
struct Height
{
    int ft;
    int inch;
};

int main()
{
    struct Height S1,S2,S3;
    S1.ft=5;
	S1.inch=10;
    S2.ft=5;
	S2.inch=6;
    S3.ft=S1.ft+S2.ft;
    S3.inch=S1.inch+S2.inch;
    if (S3.inch>11)
    {
        S3.ft++;
        S3.inch=S3.inch-12;
    }
    printf("Total height = %d ft %d inch\n", S3.ft, S3.inch);
    return 0;
}
