#include<stdio.h>

int square(int num);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int n = square(num);
    printf("the square of %d is : %d\n",num, n);
    return 0;
}

int square(int num){
    num *= num;
    return num;

}