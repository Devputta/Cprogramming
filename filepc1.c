#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w"); // now its in write mode (it will remove content then add new content)
     
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'D');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'V');
    fprintf(fptr, "%c", 'U');
    


    fclose(fptr);
    return 0;
}