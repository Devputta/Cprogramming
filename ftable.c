#include<stdio.h>

int sum(int a, int b);
void printTable(int n);

int main(){
    int n;
    printf("Enter Number for Tables :");
    scanf("%d",&n);
    
    printTable(n);
    
    return 0;
}

int sum(int a, int b){
    return a + b;
}

void printTable(int n){
    for(int i = 1; i<=10; i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
