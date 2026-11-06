#include<stdio.h>
// Else if Condion 
int main(){
    int marks;
    printf("Enter the marks : ");
    scanf("%d", &marks);

    if(marks > 90){
        printf("Marks = %d Grade: A+\n",marks);
    }
    else if(marks >= 80 && marks <= 90) {
        printf("Marks : %d Grade : A\n",marks);
    }
    else{
        printf("Grade : B\n");
    }

    printf("Thank You");
return 0;


}