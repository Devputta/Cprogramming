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
    
    printf("1st student\n");
    printf("The name is : %s\n",s1.name);
    printf("CGPA is : %f\n",s1.cgpa);
    printf("Roll Number is : %d\n", s1.roll_no);

    struct student s2;
    s2.cgpa = 7.7;
    s2.roll_no = 1234;
    strcpy(s2.name, "Ravi");

    printf("2st student\n");
    printf("THe name is %s\n ",s2.name);
    printf("CGPA is %f\n",s2.cgpa);
    printf("Roll number is %d\n",s2.roll_no);

    struct student s3;
    s3.cgpa = 6.8;
    s3.roll_no = 2345;
    strcpy(s3.name,"ramya");

    printf("3st student\n");
    printf("The name is %s\n", s3.name);
    printf("Roll NUmber is %d\n",s3.roll_no);
    printf("CGPA is : %f\n ", s3.cgpa);

return 0;
    
}