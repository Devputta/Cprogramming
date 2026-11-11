#include<stdio.h>
int main(){
    char fname[40];
    // printf("Enter the 1st name : ");
    // scanf("%s",fname);
    // printf("Enterd name is : %s \n",fname);
    //gets(fname); // warning: call to 'gets' declared with attribute warning: 
                   //Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
    fgets(fname, 100, stdin); //stdin is standard input 
    puts(fname);

    return 0;

}