#include<stdio.h>

/* call by value example in function like in main u can declare any name like number abd also it will lost in within main funclion
 in function it will copy the value from main function it wont change any thing in side main function just like whatsapp message
 like they can delete or alter whater ever whant it wont efect mine (just like that) */


void print(int num, char name);

int main(){
    int number = 10;
    char names = 'M';

    printf("The og Number is : %d\n",number);
    print(number, names); // argument formal parametor 
    return 0;
}

void print(int num, char name){ // actual parameter 
    num += 1;
    printf("the number is : %d\n",num);
    printf("The name is : %c\n",name);
}