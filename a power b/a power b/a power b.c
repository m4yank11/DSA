//
//  main.c
//  a power b
//
//  Created by Mayank Raj Gupta on 10/12/22.
//

#include <stdio.h>
int main()
{
    int a,b,c=1;
    printf("Enter the base and power respectively:\n");
    scanf("%d,%d",&a,&b);
    if(b!=0)
    
    while (b!=0)
    {
        c=c*a;
        b--;
    }
    else
        printf("Answer is 1");
    printf("The answer is:%d",c);
}
