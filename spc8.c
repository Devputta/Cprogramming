#include<stdio.h>
#include<string.h>


int main(){
    // char name[100]; 
    // fgets(name, 100, stdin); // this adds \n for next line thats why its gives mare one extra char or len
    char name[] = "mahadevu"; 
    int length = strlen(name);
    printf("The lenght of the name is : %d \n", length);
    
    return 0;
}

