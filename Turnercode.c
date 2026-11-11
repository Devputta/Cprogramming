#include<stdio.h>
//Ternary operator similer of Conditional like if 

int main(){
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);

    age>=18 ? printf("Adult") : printf("Not Adult");

    return 0;
}