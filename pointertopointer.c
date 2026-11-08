#include<stdio.h>
int main(){
    int i = 20;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("The values is : %d\n",**pptr);

    return 0;
}