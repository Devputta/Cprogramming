#include<stdio.h>

// ponter Arthimetics 

int main(){
    int age = 20;
    int *ptr = &age;
    printf("the adress of ptr is : %u\n",ptr);

    ptr++;
    printf("the adress of ptr is : %u\n",ptr);

    ptr--;
    printf("the adress of ptr is : %u\n",ptr);


    
    return 0;
}