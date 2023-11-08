//
//  main.c
//  Floyd's triangle
//
//  Created by Mayank Raj Gupta on 15/01/23.
//

#include <stdio.h>

int main(){
    int n;
    int a=1;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}
