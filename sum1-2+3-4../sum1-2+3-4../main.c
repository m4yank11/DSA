//
//  main.c
//  sum1-2+3-4..
//
//  Created by Mayank Raj Gupta on 09/01/23.
//

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            sum=sum+i;
        if(i%2==0)
            sum=sum-i;
        
    }
        printf("%d",sum);
        
    }
    
    
    
    
    
  
