#include<stdio.h>
int main()
{
    printf("Enter the marks of the student:\n");
    int m1,m2,m3,m4,m5,sum;
    
    scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    if(sum<=200)
        printf("You have failed");
    else if (sum>200 && sum<=300)
        printf("The grade is: C");
    else if(sum>300 && sum<=400)
        printf("The grade is: B");
    else
        printf("Wow you got an A");
    
    
}
