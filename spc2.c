#include<stdio.h>

void printname(char name[]);

int main(){
    char name[] = "mahadevump";
    char lname[] = "Gowda";

    printname(name);
    printf("\n");
    printname(lname);

    // for(int i = 0; name[i] != '\0';i++){
    //     printf("%c",name[i]);
    
    // }
        
    // printf("\n");
    // for(int i = 0; lname[i] != '\0';i++){
    //     printf("%c",lname[i]);
    // }
        
    return 0;
}

void printname(char name[]){
    for(int i = 0; name[i] != '\0';i++){
         printf("%c",name[i]);
    }
}