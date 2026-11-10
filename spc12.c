#include<stdio.h>
#include<string.h>

// here i taking from single character as input and stored in character array
int main(){
    char name[100];
    char c;
    int i = 0;
    while(c != '\n'){
        scanf("%c",&c);
        name[i] = c;
        i++;

    }
    name[i] = '\0';
    puts(name);
    
    return 0;
}

