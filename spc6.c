#include<stdio.h>
int main(){
    char *canChange = "Mahadevu M P"; // here declared variable is character pointer means value can be changeable at any time 
    puts(canChange);
    canChange = "Gowda M P";
    puts(canChange);

    char cantchane[] = "Mahadevu M P";
    puts(cantchane);
    //cantchane = "Gowda M P"; // here it showes error because it array type it cant change value it wont allow 
    puts(cantchane);


    return 0;
}