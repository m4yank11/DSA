//
//  main.c
//  hollow rectangle
//
//  Created by Mayank Raj Gupta on 15/01/23.
//

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)
                printf("* ");
            else if(i+j==n+1)
                printf("* ");
            
            else
                printf(" ");
        }
        printf("\n");
    }
}
