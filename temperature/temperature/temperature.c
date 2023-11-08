#include <stdio.h>
int main()
{
    int lower,upper;
    float step;
    float celsius;
    float fahr;
    lower=0;
    upper=300;
    step=10.5;
    celsius=lower;
    while (celsius<=upper) {
        fahr=(9*celsius + 160)/5;
        printf("%f\t%f\n", celsius,fahr);
        celsius=celsius+step;
        
    }
}
