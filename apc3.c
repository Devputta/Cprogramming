#include<stdio.h>

// ponter Arthimetics 

int main(){
    float price = 20.0; // float form type 
    float *ptr = &price;
    printf("the adress of ptr is : %u\n",ptr);

    ptr++;
    printf("the adress of ptr is : %u\n",ptr);

    ptr--;
    printf("the adress of ptr is : %u\n",ptr);


    
    return 0;
}