#include<stdio.h>


void print(int num, char name);
void _print(int *num, char *name); //new pointer variable

int main(){
    int number = 10;
    char names = 'M';

    print(number, names); // argument formal parametor (value) ------------------------
    printf("The og Number is : %d\n",number);
    printf("The original name if : %c\n",names);
    
    _print(&number, &names);// address as call by reference ---------------------------
    printf("The og Number is : %d\n",number);
    printf("The original name if : %c\n",names);
    return 0;
}

void print(int num, char name){ // actual parameter 
    num += 1;
    name = 'P';
    printf("the number is : %d\n",num);
    printf("The name is : %c\n",name);
}

void _print(int *num, char *name){
    *num *= *num;
    *name = 'L';
    printf("the number is : %d\n",*num);
    printf("The name is : %c\n",*name);

}