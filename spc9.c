#include<stdio.h>
#include<string.h>


int main(){
    
    char oldname[] = "mahadevu"; 
    char newname[] = "Gowdammm";
    puts(oldname);
    puts(newname);
    strcpy(newname, oldname);  // string method like copy 
    puts(oldname);
    puts(newname);
    
    return 0;
}

