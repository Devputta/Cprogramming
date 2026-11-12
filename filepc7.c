#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt","w");
    
    char name[100];
    int rolno;
    float cgpa;

    printf("Enter the name of student: ");
    scanf("%s", name);
    printf("Enter the rolnum for student: ");
    scanf("%d", &rolno);
    printf("Enter the cgpa of student: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name: %s\n", name);
    fprintf(fptr, "Student rolno: %d\n", rolno);
    fprintf(fptr, "Student cgpa: %f\n", cgpa);






    fclose(fptr);
    return 0;
}