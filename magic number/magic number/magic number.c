//
//  main.c
//  magic number
//
//  Created by Mayank Raj Gupta on 04/12/22.
//
#include<stdio.h>
int main()
{
    printf( "Hello World!\n");
    int n,m;
    printf( "enter a number  :");
    scanf("%d",&n);
    printf( "enter size of number  :");
    scanf("%d",&m);
    int n1 = n%10;
    int f1= n1| 0;
    int f=0;
    int count=0;
    while(n>0){
       int r = n%10;
       if (r>=m){
       printf(" not a magic no.");
       count++;
       break;
       }
    
       f= f | r ;
       if(f!= f1){
       printf(" not a magic no.");
       count++;
       break;
       }
      n=n/10;
     }
    
    
    if(count==0){
    printf(" is a magic no.");
    }
    
return 0;
}
