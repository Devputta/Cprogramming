#include<stdio.h>
int main(){
    char name[] = "mahadevump";
    char lname[] = "Gowda";

    for(int i = 0; name[i] != '\0';i++){
        printf("%c",name[i]);
    
    }
        
    printf("\n");
    for(int i = 0; lname[i] != '\0';i++){
        printf("%c",lname[i]);
    }
        
    return 0;
}