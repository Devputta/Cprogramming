#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter the c marks : ");
    scanf("%d",&marks[0]);
    printf("Enter the python Marks :");
    scanf("%d",&marks[1]);
    printf("Enter the Java Marks :");
    scanf("%d",&marks[2]);

    printf("Python : %d, java : %d, c : %d\n",marks[1],marks[2],marks[0]);

return 0;
}