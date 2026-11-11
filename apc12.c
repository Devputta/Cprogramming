#include<stdio.h>
void reverse(int arr[], int n);
void printnum(int arr[], int n);

int main(){
    int arrsy[] = {1,2,3,4,5,6,7,8,9};

    reverse(arrsy, 9);
    printnum(arrsy, 9);


    return 0;
}

void printnum(int arr[], int n){
    for(int i =0; i<n; i++){
            printf("%d\t", arr[i]);
    }
}

void reverse(int arr[], int n){ // call by reference 
    for(int i =0; i<n/2; i++){
        int first = arr[i];
        int second = arr[n-i-1];
        arr[i] = second;
        arr[n-i-1] = first;
    }
}