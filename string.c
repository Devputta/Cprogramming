#include<stdio.h>
int main(){
    char name[] = {'M','A','H','A','D','E','V','U'};
    char _name[] = "mahadevu";
    int i = 0;
    printf("%s\n",name);
    printf("%s\n",_name);
    while(_name[i] != '\0'){
        i++;
    }
    printf("The length %d\n",i);
return 0;
}