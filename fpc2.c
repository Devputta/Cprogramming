#include<stdio.h>

void namaste();
void bonjour();

int main(){
    char ch;
    printf("Are u Indain i or French f :");
    scanf("%c",&ch);
    if(ch == 'i')
        namaste();
    else 
        bonjour(); 
return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}