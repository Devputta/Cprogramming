#include<stdio.h>
int main(){
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);

    if(age >18){
        printf("Votable\n");
        printf("they can drive\n");
    }
    else {
        printf("Not elagiable\n ");
    }

    printf("Thank You");
return 0;


}