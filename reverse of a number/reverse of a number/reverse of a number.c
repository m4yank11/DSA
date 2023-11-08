//
//  main.c
//  reverse of a number
//
//  Created by Mayank Raj Gupta on 09/12/22.
//

#include<stdio.h>
int main(){
    int a,r,sum;
    printf("Enter the number:");
    scanf("%d",&a);
    sum=0;
    while (a>0) {
        r=a%10;
        sum= sum*10+r;
        a=a/10;
    }
    
printf("The reverse of the number is:%d",sum);
        
    
}
