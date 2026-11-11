#include<stdio.h>
#include<string.h>

struct student{         /*these are the structure declaration */
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student s1 = {"Mahadevu", 1234, 7.8};
    struct student s2 = {"Ravi", 1235, 8.8};
    struct student s3 = {"Ramya", 1236, 9.8};

    struct student *ptr = &s1;  // pointer variable assigning address of student s1 variable  to pointer variable 
    printf("roll number is : %d \n",(*ptr).roll_no); // diplaysing uing pointer variable 
    printf("roll number is : %d \n",ptr -> roll_no); // arrow operator 

    
    

    
// //Best one is structure 

//     printf("1st student\n");
//     printf("The name is : %s\n",s1.name);
//     printf("CGPA is : %f\n",s1.cgpa);
//     printf("Roll Number is : %d\n", s1.roll_no);
//     printf("\n");

//     printf("2st student\n");
//     printf("The name is : %s\n",s2.name);
//     printf("CGPA is : %f\n",s2.cgpa);
//     printf("Roll Number is : %d\n", s2.roll_no);
//     printf("\n");

//     printf("3st student\n");
//     printf("The name is : %s\n",s3.name);
//     printf("CGPA is : %f\n",s3.cgpa);
//     printf("Roll Number is : %d\n", s3.roll_no);
//     printf("\n");
    
return 0;
    
}