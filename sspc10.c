#include<stdio.h>
#include<string.h>

typedef struct bankaccount{
    int accountnum;
    char name[20];
}acc;


int main(){
    acc c1 = {123,"Dev"};
    acc c2 = {234,"Ravi"};

    printf("The Bank Holder Num: %d\n", c1.accountnum);
    printf("The Bank Holder Name: %s\n", c1.name);
     
    
    

    return 0;
}





