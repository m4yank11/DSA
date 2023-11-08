//
//  main.c
//  structure cricketer
//
//  Created by Mayank Raj Gupta on 09/04/23.
//

#include <stdio.h>
#include <string.h>
typedef struct cricketer{
    char name[20];
    int no_of_matches;
    int age;
    float avg;
    
}cricketer ;

//3 cricketers
int main(void){
cricketer arr[3];
for(int i=0;i<3;i++){
    printf("Enter the name of the cricketer : \n");
    scanf("%s",arr[i].name); //direct jaise name string me daal nhi sakte the waise hi le bhi nhi sakte isliye ya to gets ka use kro ya fir %[^\n]s
    printf("Enter the no. of matches he has played :\n");
    scanf("%d",&arr[i].no_of_matches);
    printf("Enter the age of the cricketer :\n");
    scanf("%d",&arr[i].age);
    printf("Enter the average score scored by the cricketer:\n");
    scanf("%f",&arr[i].avg);


}
for(int i=0;i<3;i++){
    printf("Name : %s\n",arr[i].name);
    printf("No. of matches : %d\n",arr[i].no_of_matches);
    printf("Age :%d\n",arr[i].age);
    printf("Average score :%f\n",arr[i].avg);
}
}
