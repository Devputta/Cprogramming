#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char pass[100];
    printf("Enter the password : ");
    scanf("%s",pass);
    salting(pass);

    return 0;
}


void salting(char password[]){
    char salt[] = "123";
    char newpass[200];
    
    strcpy(newpass, password);
    strcat(newpass,salt);
    puts(newpass);

}