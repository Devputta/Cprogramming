#include<stdio.h>
int main(){
    int number;
    printf("Enterh the number: ");
    scanf("%d",&number);

    if(number >= 0){
        printf("the number is positive \n");
        if(number % 2 == 0){
            printf("The number: %d, is even",number);
        }
        else{
            printf("The Number is Odd");
        }
    }
    else{
        printf("The number is negative");
    }

    return 0;
}