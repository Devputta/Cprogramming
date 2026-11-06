#include<stdio.h>

// Even odd 

int main(){
    int x;
    printf("Enter X value : ");
    scanf("%d", &x);
    if(x%2 == 0)
        printf("EVEN");
    else 
        printf("Odd");
return 0;
}