#include<stdio.h>


int main(){
    int n;
    printf("Enter the number n :(n>1)  : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        //printf("%d\t",fib[i]);
    }
    printf("\n");

    for(int i = 0; i<n; i++){
        printf("%d\t",fib[i]);
    } 


    


    return 0;
}

