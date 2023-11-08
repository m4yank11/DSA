//
//  main.c
//  Second Maximum in an Array
//
//  Created by Mayank Raj Gupta on 08/02/23.
//

#include <stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the %d element in the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max)
            max=arr[i];
        
            
    }
    for(int i=0;i<5;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
            
    }
    printf("The second largest value in the array is : %d\n",smax);
}


