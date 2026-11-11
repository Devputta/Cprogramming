#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // x=0

    printf("x is :%d\n",x); //x=0
    printf("*ptr is :%d \n",*ptr);//x=0

    *ptr += 5;

    printf("x is :%d \n",x);  //x=5
    printf("*ptr is :%d\n",*ptr);  //x=5

    (*ptr)++;

    printf("x is :%d \n",x);  //x=6
    printf("*ptr is :%d\n",*ptr);  //x=6



    return 0;

}