#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks from 1 to 100 : ");
    scanf("%d",&marks);

    //marks < 35 ? printf("Fail") : printf("PASS"); // Turnery Operator

    if(marks >= 0 && marks <= 30){
        printf("Fail");
    }
    else if(marks >= 35 && marks <= 100){
        printf("Pass");
    }
    else{
        printf("wrong Number");
    }

    return 0;
}