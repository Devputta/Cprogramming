#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Odd.txt","w");
    int num;
    printf("Enter the numver: ");
    scanf("%d",&num);

    for(int i=0; i<=num; i++){
        if(i % 2 != 0){
            fprintf(fptr,"%d\n", i);
        }
    }

    fclose(fptr);
    return 0;
}