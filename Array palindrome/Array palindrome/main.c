//
//  main.c
//  Array palindrome
//
//  Created by Mayank Raj Gupta on 21/02/23.
//

#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<5;i++){
        if(arr[i]!=arr[4-i]){
            printf("not palindrome");
            break;}
        else{
            printf("Palindrome \n");
            continue;
        }
        
        }
    
        
    }
    

