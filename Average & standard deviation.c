#include <stdio.h>
#include <math.h>
#define MAXSIZE 10

int main()
{
    float x[MAXSIZE];
    int  i, n;
    float sum=0,sum1=0,variance;
int SD,Mean;
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
   Mean=sum/(float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] -Mean), 2);
    }
   variance = sum1 / (float)n;
    SD=sqrt(variance);
    printf("Mean=%d\n",Mean);
    printf("SD=%d\n",SD);
return 0;

}
