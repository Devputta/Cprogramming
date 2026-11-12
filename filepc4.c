#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w"); //now its appending (it will keep previous content then add new content after the previous)
    

    putc('M',fptr);
    putc('a',fptr);
    putc('h',fptr);
    putc('a',fptr);
    putc('d',fptr);
    putc('e',fptr);
    putc('v',fptr);
    putc('u',fptr);
    putc('.',fptr);
    putc('M',fptr);
    putc('.',fptr);
    putc('P',fptr);    // putc gor writing file it should be in W mode (Write)


    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr)); // fgetc is for printing character  it should be i read r mode


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