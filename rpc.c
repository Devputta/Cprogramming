#include<stdio.h>

int sum(int n);

int main(){

    printf("%d\n",sum(5));

    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    // int nm1 = sum(n - 1);
    // int total = nm1 + n;
    return sum(n-1)+n; //total;
}