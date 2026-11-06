//Program to print the smallest of two numbers

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number foe A, B : \n");
    scanf("%f,%f", &a,&b);
    if(a>b)
        printf("A is bigger");
    else
        printf("B is Bigger ");
return 0;
}