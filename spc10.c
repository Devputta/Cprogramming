#include<stdio.h>
#include<string.h>


int main(){
    
    char oldname[100] = "Mahadevu M P "; 
    char newname[] = "Gowda";
    puts(oldname);
    puts(newname);
    // strcpy(newname, oldname);  // string method like copy 
    strcat(oldname, newname);
    puts(oldname);
    //puts(newname);

    
    return 0;
}

