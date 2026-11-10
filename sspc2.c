#include<stdio.h>
#include<string.h>

struct student{         /*these are the structure declaration */
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student s[100]; // array variable by user with size 
    s[0].roll_no = 1990;
    s[0].cgpa = 7.8;
    strcpy(s[0].name , "mahadevu");// like its an array not pointer it wont allow to change values in equal "="
    
    printf("1st student\n");
    printf("The name is : %s\n",s[0].name);
    printf("CGPA is : %f\n",s[0].cgpa);
    printf("Roll Number is : %d\n", s[0].roll_no);
    printf("\n");

  
    s[1].cgpa = 7.7;
    s[1].roll_no = 1234;
    strcpy(s[1].name, "Ravi");

    printf("2st student\n");
    printf("THe name is %s\n ",s[1].name);
    printf("CGPA is %f\n",s[1].cgpa);
    printf("Roll number is %d\n",s[1].roll_no);
    printf("\n");

    
    s[2].cgpa = 6.8;
    s[2].roll_no = 2345;
    strcpy(s[3].name,"ramya");

    printf("3st student\n");
    printf("The name is %s\n", s[2].name);
    printf("Roll NUmber is %d\n",s[2].roll_no);
    printf("CGPA is : %f\n ", s[2].cgpa);
    printf("\n");

return 0;
    
}