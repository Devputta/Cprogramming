#include<stdio.h>

// ponter Arthimetics 

int main(){
    char a = '*';
    char *ptr = &a;
    printf("the adress of ptr is : %u\n",ptr);

    ptr++;
    printf("the adress of ptr is : %u\n",ptr);

    ptr--;
    printf("the adress of ptr is : %u\n",ptr);


    
    return 0;
}