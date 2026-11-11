#include<stdio.h>

// ponter Arthimetics 

int main(){
    int age = 20;
    int *ptr = &age;
    int _age = 21;
    int *_ptr = &_age;

    printf("%u : %u the diffrence is : %u\n",ptr, _ptr, ptr-_ptr); // 1 bute diffrence like 4 integer diffrence 

    //_ptr = &age; // there in this case 1 mans True because diff pointer holding same address variable 
    printf("%u : %u the compare is : %u",ptr, _ptr, ptr == _ptr); // 0 means false both are diff adress holding 

    
    return 0;
}