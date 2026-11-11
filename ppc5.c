#include<stdio.h>

// call by value Adress printing Both are diff adress
 void printAdress(int *n);

 int main(){
    int n = 20;
    
    //printf("The OG n Adress is : %u\n",&n);
    printAdress(&n);
    printf("The OG n Adress is : %u\n",&n);

    return 0;
 }

 void printAdress(int *n){
    printf("The the Adress of N is : %u\n", n);
 }