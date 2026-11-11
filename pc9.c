#include<stdio.h>
int main(){
    for(int i = 0; i<= 10; i++){
        if(i == 6){
            continue; // to skip steps or 5
        }
        printf("%d\n",i);
    }
    printf("Thank You");
    return 0;
}