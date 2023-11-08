//
//  main.c
//  Triplet pair in array
//
//  Created by Mayank Raj Gupta on 16/03/23.
//

#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int count=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count+=1;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("Total pairs are: %d\n",count);
}
