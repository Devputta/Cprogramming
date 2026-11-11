//Program to check whether a given character is a digit or not

#include<stdio.h>
int main(){
    char ch;
    printf("Enter any didgit form 0 to 9 : ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
        printf("Its a DIGIT");
    else
        printf("Its NOT");
return 0;
}