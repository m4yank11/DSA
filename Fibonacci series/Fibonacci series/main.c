//
//  main.c
//  Fibonacci series
//
//  Created by Mayank Raj Gupta on 10/01/23.
//

#include <stdio.h>
int main(){
    int a=1,b=1,sum=0,n;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=b;
        b=sum;
        sum=a+b;
        printf("%d, ",sum);
        
    }
}
