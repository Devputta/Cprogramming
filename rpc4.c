#include<stdio.h>

int feb(int num);

int main(){
    int num;
    
        printf("%d\n",feb(6));

    return 0;
}

int feb(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    int total = feb(num-1)+feb(num-2);
    return total;
}