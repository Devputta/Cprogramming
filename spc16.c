#include<stdio.h>
#include<string.h>

void present(char name[], char ch);

int main(){
    char name[] = "Mahadevu";
    char ch;
    present(name, 'd');


    return 0;
}

void present(char name[], char ch){
    for(int i = 0; name[i]!= '\0'; i++){
        if(name[i] == ch){
            printf(" Its present at %d position\n", i);
            return;
        }

    }
            printf("No its not Present");
    

}