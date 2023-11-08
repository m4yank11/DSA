//
//  main.c
//  sum of digits of a number
//
//  Created by Mayank Raj Gupta on 02/12/22.
//

#include <stdio.h>
int main()
{
    printf("Enter the number:");
    int n1,r,sum=0;
    scanf("%d",&n1);
    while (n1>0){
        r=n1 % 10;
        sum+=r;
        n1=n1/10;
    }
    printf("The sum of the digits of the number is:%d\n",sum);
    
    
}
