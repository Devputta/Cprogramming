#include<stdio.h>
// Assignment operator (like adding arithmetic operand with assignment operand like =, +=, -=, /=, %= ) 

int main(){
    int a=1;
    int b=2;
    //a = a+b; // normal 
    //a+=b; // its assigment (arithmetic with assignment) 
    //a-=b;//------------------
    //a/=b;//-------------------
    a%=b;//-----------------
    printf("%d, %d\n", a,b);
return 0;
}