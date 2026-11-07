#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("The Sum of Two Numbres Is : %d\n",s);
    return 0;
}

int sum(int a, int b){
    return a + b;
}
