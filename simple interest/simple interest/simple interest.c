#include<stdio.h>
int main()
{
    float p,r,t,i;
    printf("Enter the principle, rate and time in years:\n");
    scanf("%f,%f,%f",&p,&r,&t);
    i=(p*r*t)/100;
    printf("The simple interest is:%f\n",i);
    printf("The total amount is:%f\n",p+i);
    
}
