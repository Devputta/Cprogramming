#include<stdio.h>

// recursion factoral number

int fact(int n);

int main(){

    printf("%d\n",fact(4));

    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    // int nm1 = fact(n - 1);
    // int total = nm1 * n;
    return fact(n-1)*n;  //total;
}