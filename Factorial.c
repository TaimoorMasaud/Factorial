#include <stdio.h>
float fact (float);
int main()
{
    float i=1.0,answer=0.0;
    while (i<=7)
    {
        answer=i/fact(i) +answer;
        i=i+1;
    }
    printf("\nThe sum  is : %.2f",answer);
}
float fact (float i)
{
    float sum=1.0;
    while (i>=1)
    {
        sum=sum*i;
        i=i-1;
    }
    return (sum);
}
