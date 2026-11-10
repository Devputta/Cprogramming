#include<stdio.h>

void printNumber(int *arr, int n); // with pointer as *arr

int main(){
    int aadhar[] = {1,3,5,7,9,0};

    printNumber(aadhar, 5);

    return 0;
}

void printNumber(int *arr, int n){
    for(int i =0; i<=n; i++){
        printf("%d\t",arr[i]);
    }
}