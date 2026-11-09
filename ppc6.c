#include<stdio.h>

void dowork(int a, int b, int *sum, int *product, int *avg);

int main(){
    int a =20, b = 30;
    int sum, product, avg;

    dowork(a,b, &sum, &product, &avg);
    printf(" The sum : %d, Product : %d, Avg : %d\n",sum, product, avg);

    return 0;
}

void dowork(int a, int b, int *sum, int *product, int *avg){
    *sum = a+b;
    *product = a*b;
    *avg = (a+b)/2;

}