#include<stdio.h>
int main()
{
    float n1,n2,sign;
    printf("Enter the first number\n");
    scanf("%f",&n1);
    printf("Enter the second number\n");
    scanf("%f",&n2);
    printf("Enter 1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    
    scanf("%f",&sign);
    if(sign==1)
        printf("%f\n",n1+n2);
    else if(sign==2)
        printf("%f\n",n1-n2);
    else if(sign==3)
        printf("%f\n",n1*n2);
    else if(sign==4)
        printf("%f\n",n1/n2);
    else
        printf("Wrong number entered\n");
    
}

