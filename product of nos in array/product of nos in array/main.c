//
//  main.c
//  product of nos in array
//
//  Created by Mayank Raj Gupta on 05/02/23.
//

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element no. %d \n",i+1);
        scanf("%d",&arr[i]);
        
    }
    int prod=1;
    for(int j=0;j<n;j++){
        prod=prod*arr[j];
    }
    printf("%d ",prod);
}
