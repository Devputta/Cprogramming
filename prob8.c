//Program to print the average of 3 numbers

//Program to print the smallest of two numbers

#include<stdio.h>
int main(){
    float a,b,c,avg;
    printf("Enter number foe A, B, c: \n");
    scanf("%f,%f,%f", &a,&b,&c);
    avg=(a+b+c)/3;
    printf("%f", avg);
  
return 0;
}