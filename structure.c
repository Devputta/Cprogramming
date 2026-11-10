#include<stdio.h>
#include<string.h>

struct student{         /*these are the structure declaration */
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student s1; // variable by user 
    s1.roll_no = 1990;
    s1.cgpa = 7.8;
    strcpy(s1.name , "mahadevu");// like its an array not pointer it wont allow to change values in equal "="

    printf("The name is : %s\n",s1.name);
    printf("CGPA is : %f\n",s1.cgpa);
    printf("Roll Number is : %d\n", s1.roll_no);

}