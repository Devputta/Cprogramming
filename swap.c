#include<stdio.h>

void swap(int a, int b); // call by value // coping a value fro variable 

void _swap(int *a, int *b); // call by reference // there pointer is created to coping address (&)

int main(){
    int x = 10, y = 20;


    printf("The OG X = %d & B = %d\n",x,y); // there is no changes in main fun like swap 
    swap(x, y);

    _swap(&x, &y);
    printf("The Og of X = %d, & b = %d\n", x, y);
    return 0;
}

// call by value 
void swap(int a, int b){
    int t = 0;
    t = a;
    a = b;
    b = t;
    printf("Call by Value = ");
    printf("a = %d, & b = %d\n",a,b); // here hapend swap
}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("Call by Reference = ");
    printf("a = %d, & b = %d\n",*a,*b );
}