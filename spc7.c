#include<stdio.h>

int printlen(char fname[]);
int countlen(char fname[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("The lenght of the name is : %d from for loop\n", printlen(name));
    printf("The lenght of the name is : %d from while loop\n",countlen(name));
    return 0;
}

int printlen(char fname[]){
    int count = 0;
    for(int i = 0; fname[i] != '\0'; i++){
        count++;
    }

return count-1;
}

int countlen(char fname[]){
    int i = 0;
    while (fname[i] != '\0')
    {
        i++;
    }
    return i-1;
}