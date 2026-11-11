#include<stdio.h>
#include<string.h>

int ovels(char ove[]);

int main(){
    char name[] = "HELLOWORLD";

    printf("The Ovels %d\n",ovels(name));

    return 0;
}

int ovels(char ove[]){
    int count = 0;
    for(int i = 0; ove[i]!='\0'; i++){
        if (ove[i] == 'A' || ove[i] == 'a' || 
            ove[i] == 'E' || ove[i] == 'e' || 
            ove[i] == 'I' || ove[i] == 'i' || 
            ove[i] == 'O' || ove[i] == 'o' || 
            ove[i] == 'U' || ove[i] == 'u')
        {
            count++;
        }
        
    }
    return count;
}