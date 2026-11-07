#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("The Letter Is Upper Case\n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("The Letter Is Lower Case\n");
    }
    else {
        printf("Its not a ENGISH Lestter\n");
    }
    return 0;
}