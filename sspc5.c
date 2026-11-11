#include<stdio.h>
#include<string.h>

struct student{         /*these are the structure declaration */
    char name[100];
    int roll_no;
    float cgpa;
};

void printinfo(struct student s2); // call by value function declaration and also s1 is the structure argument


int main(){
    struct student s1 = {"Mahadevu", 1234, 7.8};
    struct student s2 = {"Ravi", 1235, 8.8};
    struct student s3 = {"Ramya", 1236, 9.8};

    struct student *ptr = &s1;  // pointer variable assigning address of student s1 variable  to pointer variable 
    //printf("roll number is : %d \n",(*ptr).roll_no); // diplaysing uing pointer variable 
    printf("roll number is : %d \n",ptr -> roll_no); // arrow operator 
    printf("name  : %s \n",ptr -> name);
    printf("cgpa : %f \n",ptr -> cgpa);
    printf("\n");

    printf("The second Structure Info -------\n");
    printinfo(s2);
    s2.roll_no = 9008; // here we can make changes 
    s2.cgpa = 9.08;
    printf("Roll num : %d\n", s2.roll_no );

    printf("CGPA : %f\n",s2.cgpa);


return 0;
    
}

void printinfo(struct student s2){ // s1 is original argument copy u may change any thing in main function 
    printf("Student Info\n");
    printf("Roll num : %d\n", s2.roll_no );
    printf("name : %s\n", s2.name);
    printf("CGPA : %f\n",s2.cgpa);

    s2.cgpa = 9.08;
}