//
//  main.c
//  rotation of array
//
//  Created by Mayank Raj Gupta on 16/03/23.
//

#include <stdio.h>

void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9};
    reverse(arr1,2,6);
    for(int i=0;i<10;i++){
        printf("%d ",arr1[i]);
    }
}
