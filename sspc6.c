#include<stdio.h>
#include<string.h>

typedef struct softwareengineeringstudent{
    char name[100];
    int rono;
    float cgpa;
    
}ses;                                         // this typedef is craeting alias name as ses

struct  studentlist{
    int rolno;
    float cgpa;
    char name[100];          // this is like normal 

};

int main(){
    struct  studentlist s1; // normal people delaring
    s1.rolno = 9001;
    s1.cgpa = 9.8 ;
    strcpy(s1.name, "Ravikishan"); // normal people



    ses stu = {"Mahadevu",9010, 9.0};    // crazy people delcare with alias  

    printf("Normal people\n");
    printf("Name : %s\n",s1.name);
    printf("RoNO : %d\n",s1.rolno);
    printf("CGPA : %f\n",s1.cgpa);
    printf("\n");

    printf("CRAZY People \n");
    ses *ptr = &stu;                             // this is how crazy people print uisng pointer 
    printf("Name : %s\n",ptr ->name);
    printf("RolNo : %d\n",ptr->rono);
    printf("CGPA : %f\n", ptr->cgpa);
    

    
}



