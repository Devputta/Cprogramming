#include<stdio.h>
int main(){
    for(int i = 5; i<= 55; i++){
        if(i % 2 == 0){
            continue; // to skip steps or 5
        }
        printf("%d\n",i);
    }
    printf("Thank You");
    return 0;
}