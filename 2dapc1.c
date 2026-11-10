#include<stdio.h>
int main(){
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 80;
    marks[0][2] = 70;

    marks[1][0] = 97;
    marks[1][1] = 80;
    marks[1][2] = 88;

    printf("the marks is : %d\n",marks[1][0]);
}