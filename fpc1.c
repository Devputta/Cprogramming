#include<stdio.h>

void fun1();
void fun2();

int main(){
    for(int i = 1; i<=5; i++){
        fun1();
        fun2();
    }
    
    return 0;
}

void fun1(){
    printf("Hello\n");
}

void fun2(){
    printf("Good bye\n");
}