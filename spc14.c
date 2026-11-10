#include<stdio.h>
#include<string.h>
void slice(char name[], int n, int m);

//sclice function or sentece 

int main(){
    char fname[100] = "Helloworld";

    slice(fname, 3, 6);

    return 0;

}

void slice(char name[], int n, int m){
    char newstr[200];
    int j=0;
    for(int i = n; i<=m; i++, j++){
        newstr[j] = name[i];
    }

    newstr[j] = '\0';
    puts(newstr);
}