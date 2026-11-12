#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    int n;
    fscanf(fptr, "%d", &n);// reading num integer and saving thet integer in num variable 
    printf("number = %d\n", n); // this is used for printing a value from variable called num 
    fscanf(fptr, "%d", &n); 
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n); 
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n); 
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n); 
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n); 
    printf("number = %d\n", n);





    fclose(fptr);
    return 0;
}