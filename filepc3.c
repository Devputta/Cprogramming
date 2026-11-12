#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r"); //now its appending (it will keep previous content then add new content after the previous)
    
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr)); // fgetc is for printing character 


    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'H');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'D');
    // fprintf(fptr, "%c", 'E');
    // fprintf(fptr, "%c", 'V');
    // fprintf(fptr, "%c", 'U');
    


    fclose(fptr);
    return 0;
}