
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers \n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b && a>c)
        printf("The greatest number is:%d\n",a);

    else if(b>c && b>c)
        printf("The greatest number is:%d\n",b);

    else if(c>a && c>b)
        printf("The greatest number is:%d\n",c);

    
    
    
    return 0;}
