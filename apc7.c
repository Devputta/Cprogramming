#include<stdio.h>
int main(){
    int aadhar[5];
    int *ptr = &aadhar[0]; // with pointer 

    for(int i = 0;i<=5;i++){
        printf("%d is nidex value : \n",i);
        scanf("%d", ptr+i);
    }

    for(int i = 0; i<=5; i++){
        printf("The index %d : %d \n",i,*(ptr+i));
    }
}