#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("newtest.txt", "r");
    if(fptr == NULL){
        printf("No file\n");
    }else{
        fclose(fptr);
    }

    
    return 0;
}